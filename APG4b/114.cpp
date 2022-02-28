#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int a = 10;
    int b = 5;

    int answer = min(a, b);
    cout << answer << endl;
    cout << min('a', 'b') << endl;
    cout << max(a, b) << endl;

    swap(a, b);
    cout << a << endl;
    cout << b << endl;

    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec.at(i) << endl;
    }

    vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec.at(i) << endl;
    }

    vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec.at(i) << endl;
    }

    cout << min(max(1, 2), 3) << endl;
    cout << min(1 + 1, 2 + 2) << endl;
}