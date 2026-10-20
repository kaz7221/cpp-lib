# cpp-lib

[English](README.md) | 日本語

kaz7221 (mocchi) による競技プログラミング用のC++ライブラリです。

## 説明

このコードの大部分は私が執筆していますが、AIによって書かれたコードが含まれることがあります。
また、私はコードの確認にAIを使用しています。
(AIはClaude Sonnet 5.5をよく使っています)

## 使い方

コードの一部はC++標準ライブラリ、[AtCoder Library (ACL)](https://github.com/atcoder/ac-library)に依存することがあり、また私は`std::`を省略しています。
そのため、ACLをインストールし、以下のコードをあなたのコードの先頭に置くことを推奨します。

```cpp
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll inf = 1e18;
```

学習の有無にかかわらず生成AIにこのコードを見せてもよいですが、コンテスト中は生成AI対策ルールに従ってください。

## ライセンス

このコードは[MPL-2.0](LICENSE)の下で使用できます。

## AtCoderコンテスト中の使用

AtCoderの生成AI対策ルールにより、ライブラリを引用する際はレポジトリのリンクをコード内に記入する必要があります。

## 免責

このコードにはいかなる保証も存在せず、私はバグの責任を負いません。コードを使用する際は自己責任でお願いします。
