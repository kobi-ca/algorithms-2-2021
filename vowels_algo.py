#!/usr/bin/env python3

def count_vowels():
    vowels = set('aeiou')
    input_str = "hello world"
    lst = [v for v in input_str if v not in vowels]
    sz = len(lst)
    print(f"{sz}")


def main():
    count_vowels()


if __name__ == "__main__":
    main()
