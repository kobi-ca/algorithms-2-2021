// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata (but not y).
// The input string will only consist of lower case letters and/or spaces.
// https://www.codewars.com/kata/54ff3102c1bad923760001f3?utm_source=newsletter

fn main() {
    let inputStr = String::from("hello world");

    let cnt = inputStr.chars().filter(|&o| match o { 'a' | 'e' | 'i' | 'o' | 'u' => true, _ => false } ).count();
    println!("{}", cnt);
}
