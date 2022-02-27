#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    cout << (5 < 10) << endl;
    cout << (5 > 10) << endl;

    if (1)
    {
        /* code */
        cout << "Hello" << endl;
    }

    if (0)
    {
        /* code */
        cout << "world" << endl;
    }

    if (true)
    {
        /* code */
        cout << "Hello" << endl;
    }

    if (false)
    {
        /* code */
        cout << "world" << endl;
    }

    int x;
    cin >> x;

    bool a = true;
    bool b = x < 10;
    bool c = false;

    if (a && b)
    {
        /* code */
        cout << "Hello" << endl;
    }
    if (c)
    {
        /* code */
        cout << "world" << endl;
    }
}