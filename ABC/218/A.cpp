#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s;
    cin >> s;

    if (s.at(N - 1) == 'o')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}