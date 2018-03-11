# ClangOmikuji
おみくじ

## 処理
rand()関数を使用して1 ～ 6のランダムな数字を使って、おみくじの結果を出力します。

## コード
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int omikuji = rand() % 6 + 1;
    if (omikuji == 1) {
        printf("大吉\n");
    } else if (omikuji == 2) {
        printf("中吉\n");
    } else if (omikuji == 3) {
        printf("小吉\n");
    } else if (omikuji == 4) {
        printf("吉\n");
    } else if (omikuji == 5) {
        printf("凶\n");
    } else {
        printf("大凶\n");
    }
}
```

## 出力結果  
```
大吉
```
  
## 開発環境
| 開発ツール |  |
|:-|:-|
| OS | Windows10 |
| 仮想化ソフト | Oracle VM VirtualBox 5.2 |
| 構築ソフト | Vagrant 2.0.2 |
| 仮想化上OS | CentOS 6.9 |
| SSHクライアント | PuTTY 0.6.8 |
| FTPクライアント | Cyberduck 6.3.5 |
| エディタ | Atom 1.24.0 |
| 開発言語 | gcc 4.4.7 |
