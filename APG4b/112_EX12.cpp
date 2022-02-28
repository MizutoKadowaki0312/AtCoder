#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    string S;
    cin >> S;

    int ans = 1;

    for (int i = 0; i < S.size(); i++)
    {
        /* code */
        if (S.at(i) == '+')
        {
            /* code */
            ans += 1;
        }
        else if (S.at(i) == '-')
        {
            /* code */
            ans -= 1;
        }
    }
    cout << ans << endl;
}