#include "bits/stdc++.h"
using namespace std;

int main()
{
    int A;
    int B;
    int C;
    cin >> A >> B >> C;

    int Y = B / C * C;

    if (A <= Y)
    {
        cout << Y << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}