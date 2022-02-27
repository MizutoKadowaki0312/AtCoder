#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    x += 1;
    cout << x << endl;

    x *= a + b;
    cout << x << endl;

    x *= x;
    cout << x << endl;

    x -= 1;
    cout << x << endl;
}