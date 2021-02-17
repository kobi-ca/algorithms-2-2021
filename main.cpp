#include <string>
#include <iostream>
#include <algorithm>
#include <array>
#include <string_view>
#include <range/v3/all.hpp>

// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata (but not y).
// The input string will only consist of lower case letters and/or spaces.
// https://www.codewars.com/kata/54ff3102c1bad923760001f3?utm_source=newsletter

template <typename ELEM, typename CONT>
bool is_in(const ELEM &e, const CONT &c) {
    return std::any_of(std::cbegin(c), std::cend(c), [e](const auto chr){ return chr == e; });
}


int main(int, char*[]) {
    const std::string input("hello world");
    using namespace std::literals;
    const auto chrs{"aeiou"sv};

    const auto has_vowel([&chrs](const auto c){ return is_in(c, chrs); });
    std::clog << std::count_if(std::cbegin(input), std::cend(input), has_vowel) << '\n';

    // with ranges
    const auto cnt = ranges::distance(input | ranges::views::filter(has_vowel));
    std::clog << cnt << '\n';
}
