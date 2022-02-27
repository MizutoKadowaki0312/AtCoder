#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp


int main()
{
    int name;
    name = 10;

    // int name = 10; でもOK

    cout << name << endl;
    cout << name + 2 << endl;
    cout << name * 3 << endl;

    int a = 10;
    int b;
    b = a;
    a = 5;

    cout << a << endl;
    cout << b << endl;

    int i = 30;
    double d = 1.5;
    string s = "Hello";
    
    cout << i << endl;
    cout << d << endl;
    cout << s << endl;

    cout << i+d << endl;
    cout << i*d << endl;
    cout << 45/2 << endl;
    cout << (i*d)/2 << endl;
}