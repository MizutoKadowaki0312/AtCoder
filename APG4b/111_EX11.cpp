#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // number of calc
    int N;
    cin >> N;

    // initial number
    int A;
    cin >> A;

    for (int i = 0; i < N; i++)
    {
        /* code */
        string op;
        int B;
        cin >> op >> B;

        if (op == "+")
        {
            /* code */
            A += B;
        }
        else if (op == "-")
        {
            /* code */
            A -= B;
        }
        else if (op == "*")
        {
            /* code */
            A *= B;
        }
        else if (op == "/" && B != 0)
        {
            /* code */
            A /= B;
        }
        else
        {
            cout << "error" << endl;
            break;
        }

        cout << i + 1 << ":" << A << endl;
    }
}