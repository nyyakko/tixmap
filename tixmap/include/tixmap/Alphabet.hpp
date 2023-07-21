#pragma once

#include <array>
#include <string_view>
#include <unordered_map>

using namespace std::literals;

namespace font
{
    inline std::unordered_map<char, std::array<std::string_view, 7>> alphabet
    {
        { 'a', {
            " . . . . . . . "sv,
            " . . o o o . . "sv,
            " . . . . . o . "sv,
            " . . o o o o . "sv,
            " . o . . . o . "sv,
            " . . o o o o . "sv,
            " . . . . . . . "sv
        }},
        { 'b', {
            " . . . . . . . "sv,
            " . o . . . . . "sv,
            " . o . o o . . "sv,
            " . o o . . o . "sv,
            " . o . . . o . "sv,
            " . o o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 'c', {
            " . . . . . . . "sv,
            " . . o o o . . "sv,
            " . o . . . o . "sv,
            " . o . . . . . "sv,
            " . o . . . o . "sv,
            " . . o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 'd', {
            " . . . . . o . "sv,
            " . . . . . o . "sv,
            " . . o o . o . "sv,
            " . o . . o o . "sv,
            " . o . . . o . "sv,
            " . . o o o o . "sv,
            " . . . . . . . "sv
        }},
        { 'e', {
            " . . . . . . . "sv,
            " . . o o o . . "sv,
            " . o . . . o . "sv,
            " . o o o o o . "sv,
            " . o . . . . . "sv,
            " . . o o o o . "sv,
            " . . . . . . . "sv
        }},
        { 'f', {
            " . . . . . . . "sv,
            " . . . o o . . "sv,
            " . . o . . . . "sv,
            " . o o o o . . "sv,
            " . . o . . . . "sv,
            " . . o . . . . "sv,
            " . . . . . . . "sv
        }},
        { 'g', {
            " . . . . . . . "sv,
            " . . o o o o . "sv,
            " . o . . . o . "sv,
            " . . o o o o . "sv,
            " . . . . . o . "sv,
            " . o o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 'h', {
            " . . . . . . . "sv,
            " . o . . . . . "sv,
            " . o . . . . . "sv,
            " . o . o o . . "sv,
            " . o o . . o . "sv,
            " . o . . . o . "sv,
            " . . . . . . . "sv
        }},
        { 'i', {
            " . . . o . . . "sv,
            " . . . . . . . "sv,
            " . . . o . . . "sv,
            " . . . o . . . "sv,
            " . . . o . . . "sv,
            " . . . o . . . "sv,
            " . . . . . . . "sv
        }},
        { 'j', {
            " . . . . . . . "sv,
            " . . . . . o . "sv,
            " . . . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 'k', {
            " . . . . . . . "sv,
            " . o . . o . . "sv,
            " . o . o . . . "sv,
            " . o o . . . . "sv,
            " . o . o . . . "sv,
            " . o . . o . . "sv,
            " . . . . . . . "sv
        }},
        { 'l', {
            " . . o . . . . "sv,
            " . . o . . . . "sv,
            " . . o . . . . "sv,
            " . . o . . . . "sv,
            " . . o . . . . "sv,
            " . . . o . . . "sv,
            " . . . . . . . "sv
        }},
        { 'm', {
            " . . . . . . . "sv,
            " . o o . o . . "sv,
            " . o . o . o . "sv,
            " . o . o . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . . . . . . "sv
        }},
        { 'n', {
            " . . . . . . . "sv,
            " . o o o o . . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . . . . . . "sv
        }},
        { 'o', {
            " . . . . . . . "sv,
            " . . o o o . . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 'p', {
            " . . . . . . . "sv,
            " . o . o o . . "sv,
            " . o o . . o . "sv,
            " . o . . . o . "sv,
            " . o o o o . . "sv,
            " . o . . . . . "sv,
            " . o . . . . . "sv
        }},
        { 'q', {
            " . . . . . . . "sv,
            " . . o o . o . "sv,
            " . o . . o o . "sv,
            " . o . . . o . "sv,
            " . . o o o o . "sv,
            " . . . . . o . "sv,
            " . . . . . o . "sv
        }},
        { 'r', {
            " . . . . . . . "sv,
            " . o . o o . . "sv,
            " . o o . . o . "sv,
            " . o . . . . . "sv,
            " . o . . . . . "sv,
            " . o . . . . . "sv,
            " . . . . . . . "sv
        }},
        { 's', {
            " . . . . . . . "sv,
            " . . o o o o . "sv,
            " . o . . . . . "sv,
            " . . o o o . . "sv,
            " . . . . . o . "sv,
            " . o o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 't', {
            " . . . o . . . "sv,
            " . . o o o . . "sv,
            " . . . o . . . "sv,
            " . . . o . . . "sv,
            " . . . o . . . "sv,
            " . . . . o . . "sv,
            " . . . . . . . "sv
        }},
        { 'u', {
            " . . . . . . . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . o o o o . "sv,
            " . . . . . . . "sv
        }},
        { 'v', {
            " . . . . . . . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . o . o . . "sv,
            " . . . o . . . "sv,
            " . . . . . . . "sv
        }},
        { 'w', {
            " . . . . . . . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . o . o . o . "sv,
            " . o . o . o . "sv,
            " . . o o o o . "sv,
            " . . . . . . . "sv
        }},
        { 'x', {
            " . . . . . . . "sv,
            " . o . . . o . "sv,
            " . . o . o . . "sv,
            " . . . o . . . "sv,
            " . . o . o . . "sv,
            " . o . . . o . "sv,
            " . . . . . . . "sv
        }},
        { 'y', {
            " . . . . . . . "sv,
            " . o . . . o . "sv,
            " . o . . . o . "sv,
            " . . o o o o . "sv,
            " . . . . . o . "sv,
            " . o o o o . . "sv,
            " . . . . . . . "sv
        }},
        { 'z', {
            " . . . . . . . "sv,
            " . o o o o o . "sv,
            " . . . . o . . "sv,
            " . . . o . . . "sv,
            " . . o . . . . "sv,
            " . o o o o o . "sv,
            " . . . . . . . "sv
        }},
        { '.', {
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . o o . . . . "sv,
            " . o o . . . . "sv,
            " . . . . . . . "sv
        }},
        { ',', {
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . o . . . . . "sv,
            " . o . . . . . "sv,
            " . o . . . . . "sv
        }},
        { ' ', {
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv,
            " . . . . . . . "sv
        }}
    };
}