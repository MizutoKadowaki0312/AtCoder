#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    string ans;

    while (N > 0)
    {
        if (N % 2 == 1)
        {
            ans += "A";
            N -= 1;
        }
        else
        {
            ans += "B";
            N /= 2;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}