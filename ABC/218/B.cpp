#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    char Alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    vector<int> P(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> P[i];
    }
    char S[26];
    for (int i = 0; i < 26; i++)
    {
        S[i] = Alphabet[P[i] - 1];
    }

    cout << S << endl;
}