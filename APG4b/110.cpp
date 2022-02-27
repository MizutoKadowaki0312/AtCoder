#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // while (true)
    // {
    //     /* code */
    //     cout << "Hello" << endl;
    //     cout << "AtCoder" << endl;
    // }

    int i = 1;
    // while (true)
    // {
    //     /* code */
    //     cout << i << endl;
    //     i += 1;
    // }

    // while (i <= 5)
    // {
    //     /* code */
    //     cout << i << endl;
    //     i += 1;
    // }

    i = 0;
    while (i < 5)
    {
        /* code */
        cout << i << endl;
        i += 1;
    }

    int N;
    cin >> N; // how many people

    int sum = 0;
    int x; // score
    i = 0; // counter

    while (i < N)
    {
        /* code */
        cin >> x;
        sum += x;
        i += 1;
    }

    cout << sum << endl;

    i = 5;
    while (i >= 0)
    {
        /* code */
        cout << i << endl;
        i -= 1;
    }
}