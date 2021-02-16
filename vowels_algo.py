#!/usr/bin/env python3


def count_vowels():
    vowels = set('aeiou')
    input_str = "hello world"
    lst = [v for v in input_str if v in vowels]
    sz = len(lst)
    print(f"{sz}")


def better_count_vowels():
    vowels = set('aeiou')
    input_str = "hello world"
    filtered = filter(lambda x: x in vowels, input_str)
    # https://stackoverflow.com/questions/3345785/getting-number-of-elements-in-an-iterator-in-python
    sz = sum(1 for _ in filtered)
    print(f"{sz}")


def main():
    count_vowels()
    better_count_vowels()


if __name__ == "__main__":
    main()
