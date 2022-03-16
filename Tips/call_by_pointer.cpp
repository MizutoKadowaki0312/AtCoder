#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

void twice(int *a)
{
    cout << *a << endl;
    *a *= 2;
    cout << *a << endl;
}

int main()
{
    int v = 16;
    cout << v << endl;
    twice(&v);
    cout << v << endl;
}