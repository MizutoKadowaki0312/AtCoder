#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

// int f(int x)
// {
//     x = x * 2;
//     return x;
// }

// int g(int &x)
// {
//     x = x * 2;
//     return x;
// }

void min_and_max(int a, int b, int c, int &minimum, int &maximum)
{
    minimum = min(a, min(b, c));
    maximum = max(a, max(b, c));
}

int sum100(vector<int> &a)
{
    int result = 0;
    for (int i = 0; i < 100; i++)
    {
        /* code */
        result += a.at(i);
    }
    return result;
}

int main()
{
    // int a = 3;
    // int &b = a;

    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // b = 4;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // int a = 123;
    // int &b = a;

    // string s = "abg4b";
    // string &t = s;

    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> &w = v;
    // int a = 3;
    // int b = f(a);
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // a = 3;
    // b = g(a);
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    int minimum;
    int maximum;

    min_and_max(3, 1, 5, minimum, maximum);
    cout << "minimum = " << minimum << endl;
    cout << "maximum = " << maximum << endl;

    vector<int> vec(10000000, 1);
    cout << vec.size() << endl;

    for (int i = 0; i < 500; i++)
    {
        /* code */
        cout << sum100(vec) << endl;
    }
}