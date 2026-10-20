# cpp-lib

English | [日本語](README.ja.md)

C++ library by kaz7221 (mocchi) for competitive programming.

## About

Most of the code in this library is written by me. Some parts are written by AI (usually Claude Sonnet 5.5), and I always have my code reviewed by AI.

## How to use

This code can be used as a snippet.
Some code requires the C++ standard library and the [AtCoder Library (ACL)](https://github.com/atcoder/ac-library), and I don't write `std::` in my code.
I suggest you install ACL and put the following at the top of your code:

```cpp
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll inf = 1e18;
```

You can show this code to AI, but please follow AtCoder's generative AI rules when you're entering an AtCoder contest.

## License

You can use this code under the [MPL-2.0](LICENSE) license.

## Using this code in AtCoder Contests

According to AtCoder's rules, you are to include the URL of this repository at the top of your code if it uses code from this library.

## Disclaimer

This code is provided "as is", without warranty of any kind. I take no responsibility for bugs, so please use it at your own risk.

