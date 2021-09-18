#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <typeinfo>
using namespace std;

int main()
{
    string S1;
    string S2;
    string S3;
    string T;

    cin >> S1;
    cin >> S2;
    cin >> S3;
    cin >> T;

    //cout << T.size() << endl;

    string ans;

    for (int i = 0; i < T.size(); i++)
    {
        if (T.at(i) == '1')
        {
            ans += S1;
        }
        else if (T.at(i) == '2')
        {
            ans += S2;
        }
        else if (T.at(i) == '3')
        {
            ans += S3;
        }
    }

    cout << ans << endl;
}