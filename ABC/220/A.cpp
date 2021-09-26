#include "bits/stdc++.h"
using namespace std;

int main()
{
    int A;
    int B;
    int C;

    cin >> A >> B >> C;

    int ans = 0;
    int count = 0;

    for (int i = 0; i < (B - A + 1); i++)
    {
        ans = C * i;
        cout << i << " " << ans << endl;
        if (ans < A)
        {
            continue;
        }
        if (ans >= B)
        {
            break;
        }
        if (A <= ans && ans <= B)
        {
            count += 1;
        }
        if (!(A <= ans && ans <= B))
        {
            count += 0;
        }
    }

    if (1 <= count)
    {
        cout << ans << endl;
    }

    if (count == 0)
    {
        cout << -1 << endl;
    }
}