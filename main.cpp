#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata (but not y).
// The input string will only consist of lower case letters and/or spaces.
// https://www.codewars.com/kata/54ff3102c1bad923760001f3?utm_source=newsletter

template <typename E, typename C>
bool is_in(const E &e, const C &c) {
    return std::any_of(std::begin(c), std::end(c), [e](const auto chr){ return chr == e; });
}


int main(int, char*[]) {
    const std::string input("hello world");
    const std::vector<char> chrs{'a', 'e', 'i', 'o', 'u'};

    const auto has_vowels([&chrs](const auto c){ return is_in(c, chrs); });
    std::clog << std::count_if(std::begin(input), std::end(input), has_vowels) << '\n';
}
