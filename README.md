# Competitive Programming

## Problem Sets

* https://codeforces.com/problemset?order=BY_RATING_ASC
* https://cses.fi/problemset/
* https://leetcode.com/problemset/all/

## C++

### Input & Output

`std::cin` can read multiple values separated by whitespace:

```
int a, b;
std::string c;
std::cin >> a >> b >> c;

// >>> 25 50 abcdef
// a = 25
// b = 50
// c = "abcdef"
```

It is possible to continuously read values from STDIN using a loop:

```
while(std::cin > x) {
    // ...
}
```

### Integer Types

https://en.cppreference.com/w/cpp/language/types

`int` will be 32 bits on 64-bit systems. `long` will be 64 bits on Unix-like systems and 32 bits on Windows.

`long long` will always be 64 bits. The `LL` suffix should be appended to `long long` integer literals.
