#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int j = 0;
    while (j < 3)
    {
        /* code */
        cout << "Hello while:" << j << endl;
        j += 1;
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << "Hello for:" << i << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (i == 3)
        {
            /* code */
            cout << "exit" << endl;
            break;
        }
        cout << i << endl;
    }
    cout << "end" << endl;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (i == 3)
        {
            /* code */
            cout << "skip" << endl;
            continue;
        }
        cout << i << endl;
    }
    cout << "end" << endl;

    for (int i = 0; i < 2; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            cout << "i = " << i << " j = " << j << endl;
        }
    }
}