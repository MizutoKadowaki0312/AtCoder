#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count;
    count = 0;

    vector<string> S(N);
    vector<string> T(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (S[i] == S[j] && T[i] == T[j])
            {
                count += 1;
            }
        }
    }
    if (count > 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}