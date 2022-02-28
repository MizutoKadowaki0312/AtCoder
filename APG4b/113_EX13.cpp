#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int N;
    cin >> N;

    // score vector
    vector<int> score(N);

    // total score
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        /* code */
        cin >> score.at(i);
        sum += score.at(i);
    }

    // average
    int average = sum / N;

    // answer
    int ans = 0;

    // calc
    for (int i = 0; i < N; i++)
    {
        /* code */
        if (score.at(i) > average)
        {
            /* code */
            ans = score.at(i) - average;
        }
        else if (score.at(i) <= average)
        {
            /* code */
            ans = average - score.at(i);
        }
        cout << ans << endl;
    }
}