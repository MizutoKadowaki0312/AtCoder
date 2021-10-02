#include "bits/stdc++.h"
using namespace std;

int main()
{
    int A;
    int B;
    cin >> A >> B;
    int C = A - B;

    int ans = pow(32, C);

    cout << ans;
}