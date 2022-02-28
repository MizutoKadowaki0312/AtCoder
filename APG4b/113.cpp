#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // vector<int> vec;
    // vec = {25, 100, 64};
    // cout << vec.at(0) << endl;
    // cout << vec.size() << endl;

    // vector<int> vec(3);
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     /* code */
    //     cout << vec.at(i) << endl;
    // }

    // int N;
    // vector<int> math(N);
    // vector<int> english(N);

    // cin >> N;

    // for (int i = 0; i < N; i++)
    // {
    //     /* code */
    //     cin >> math.at(i);
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     /* code */
    //     cin >> english.at(i);
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     /* code */
    //     cout << math.at(i) + english.at(i) << endl;
    // }

    vector<int> vec(3, 5);
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec.at(i) << endl;
    }
    vec = {1, 2, 3};
    vec.push_back(10);
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec.at(i) << endl;
        // cout << vec[i] << endl;
    }
    vec.pop_back(); // delete end element
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec.at(i) << endl;
        // cout << vec[i] << endl;
    }
}