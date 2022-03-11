#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    vector<int> data(5);
    for (int i = 0; i < data.size(); i++)
    {
        /* code */
        cin >> data.at(i);
    }

    int answer = 0;
    if (data.at(0) == data.at(1))
    {
        /* code */
        answer += 1;
    }
    if (data.at(1) == data.at(2))
    {
        /* code */
        answer += 1;
    }
    if (data.at(2) == data.at(3))
    {
        /* code */
        answer += 1;
    }
    if (data.at(3) == data.at(4))
    {
        /* code */
        answer += 1;
    }

    if (answer > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}