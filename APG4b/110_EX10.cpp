#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int A, B;
    cin >> A >> B;

    int i = 0;
    int j = 0;

    cout << "A:";
    while (i < A)
    {
        cout << "]";
        i += 1;
    }

    cout << endl;
    cout << "B:";
    while (j < B)
    {
        cout << "]";
        j += 1;
    }
    cout << endl;
}