#include "tixmap/Alphabet.hpp"

#include <array>
#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
#include <ranges>

auto& operator<<(std::ofstream& stream, auto lhs)
{
    return stream.write((const char*)&lhs, sizeof(decltype(lhs)));
}

auto parse_message(auto message)
{
    std::vector<std::array<std::string_view, 7>> parsedMessage = {};
    
    for (auto value : std::string_view { message })
    {
        if (!std::ranges::contains(font::alphabet | std::views::keys, std::tolower(value)))
        {
            std::cout << std::format("skipping unsupported character: {}\n", value);
            continue;
        }
        
        parsedMessage.emplace_back(font::alphabet[std::tolower(value)]);
    }
    
    return parsedMessage;
}

auto zip_parsed_message(auto const& parsedMessage)
{
    std::string zippedMessage {};
    
    for (auto row : std::views::iota(0zu, 7zu))
    {
        for (auto col : std::views::iota(0zu, std::size(parsedMessage)))
        {
            zippedMessage += parsedMessage[col][row];
        }
    }
    
    return zippedMessage;
}

int main(int argumentCount, char const** argumentValues)
{
    std::span<char const*> argument { argumentValues, (size_t)argumentCount };
    
    auto program = std::filesystem::path(argument.front());
    auto programName = program.filename().string();
    
    if (!std::size(argument | std::views::drop(1)))
    {
        std::cout << std::vformat(R"(usage: {} "...")", std::make_format_args(programName)) << '\n';
        return EXIT_FAILURE;
    }
    
    std::ofstream image("image.bmp", std::ios_base::binary);
    
    auto parsedMessage = parse_message(argument[1]);
    
    image << (unsigned short)0x4d42;   // signature
    image << (unsigned int)0x00000000; // fileSize
    image << (unsigned int)0x00000000; // reserved
    image << (unsigned int)0x00000046; // dataOffset
    image << (unsigned int)0x00000028; // infoHeaderSize
    image << (unsigned int)(0x00000007 * std::size(parsedMessage)); // width
    image << (unsigned int)0x00000007; // height
    image << (unsigned short)0x0001;   // planes
    image << (unsigned short)0x0020;   // bitsPerPixel
    image << (unsigned int)0x00000000; // compression
    image << (unsigned int)0x00000000; // imageSize
    image << (unsigned int)0x00000000; // xPixelsPerMeter
    image << (unsigned int)0x00000000; // yPixelsPerMeter
    image << (unsigned int)0x00000000; // colorsUsed
    image << (unsigned int)0x00000000; // importantColors
    image << (unsigned int)0x00ff0000; // rChannelMask
    image << (unsigned int)0x0000ff00; // gChannelMask
    image << (unsigned int)0x000000ff; // bChannelMask
    image << (unsigned int)0xff000000; // aChannelMask
    
    for (auto letterPixels : zip_parsed_message(parsedMessage) 
                                           | std::views::drop_while(::isspace)
                                           | std::views::chunk(std::size(parsedMessage) * 15zu) 
                                           | std::views::reverse)
    {
        for (auto pixel : letterPixels)
        {
            static constexpr auto background = 0xff'0e'0e'0e;
            static constexpr auto foreground = 0xff'ff'ff'ff;
            
            switch (pixel)
            {
            case '.': image << background; break;
            case 'o': image << foreground; break;
            }
        }
    }
    
    return EXIT_SUCCESS;
}