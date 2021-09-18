#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    /*
    0 ~39 : 初級
    40 ~ 69 : 中級
    70 ~ 89 : 上級
    90 ~ : expert
    */

    int X;
    cin >> X;

    int ans;

    if (0 <= X && X < 40)
    {
        ans = 40 - X;
        cout << ans << endl;
    }
    else if (40 <= X && X < 70)
    {
        ans = 70 - X;
        cout << ans << endl;
    }
    else if (70 <= X && X < 90)
    {
        ans = 90 - X;
        cout << ans << endl;
    }
    else if (90 <= X && X <= 100)
    {
        cout << "expert" << endl;
    }
}