#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int x = 5;
    x += 1 + 2;
    cout << x << endl;

    int a = 5;
    a -= 2;
    cout << a << endl;

    int b = 3;
    b *= 1 + 2;
    cout << b << endl;

    int c = 4;
    c /= 2;
    cout << c << endl;

    int d = 5;
    d %= 2;
    cout << d << endl;

    x = 5;
    x++; // x += 1
    cout << x << endl;

    int y = 5;
    y--;
    cout << y << endl;
}