#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string Alphabet = "abcdefghijklmnopqrstuvwxyz";

    vector<int> P(26);
    for (int i = 0; i < P.size(); i++)
    {
        cin >> P[i];
    }

    string ans;
    for (int i = 0; i < P.size(); i++)
    {

        ans += Alphabet.at(P[i] - 1);
    }

    cout << ans << endl;
}