#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> Q(N);

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    for (int i = 0; i < N; i++)
    {
        int t = P[i] - 1;
        Q[t] = i + 1;
    }

    for (int i = 0; i < N; i++)
    {
        cout << Q[i] << endl;
    }
}