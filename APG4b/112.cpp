#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // string は 「文字列」
    string str1;
    string str2;

    cin >> str1;

    // string は " " で囲む．
    str2 = " , world !";

    cout << str1 << str2 << endl;

    // 文字列の長さ
    string str = "Hello";
    cout << str.size() << endl;

    // i番目の文字
    cout << str.at(0) << endl;
    cout << str.at(4) << endl;

    // char は 「文字列」：1文字のデータしか保持できない．

    // char は ' ' で囲む．
    char c = 'a';
    cout << c << endl;

    char d = str.at(0);
    cout << d << endl;

    str.at(0) = 'M';
    cout << str << endl;

    if (str.at(1) == 'e')
    {
        cout << "AtCoder" << endl;
    }
}