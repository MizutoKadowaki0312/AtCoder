#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int A, B;
    string op;
    cin >> A >> op >> B;

    if (op == "+")
    {
        cout << A + B << endl;
    }
    else if (op == "-")
    {
        cout << A - B << endl;
    }
    else if (op == "*")
    {
        cout << A * B << endl;
    }
    else if (op == "/" && B != 0)
    {
        cout << A / B << endl;
    }
    else if (op == "?")
    {
        cout << "error" << endl;
    }
    else if (op == "=")
    {
        /* code */
        cout << "error" << endl;
    }
    else if (op == "!")
    {
        /* code */
        cout << "error" << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}