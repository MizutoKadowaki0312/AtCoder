#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

void printVec(vector<int> &vec)
{
    for (int x : vec)
    {
        /* code */
        cout << x << " ";
    }
    cout << "/ size = " << vec.size();
    cout << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int> vec01 = vec;
    vec01.erase(vec01.begin() + 2);
    for (int x : vec01)
    {
        /* code */
        cout << x << " ";
    }
    cout << endl;

    vector<int> vec02 = vec;

    /*
        erase(a,b)を指定すると，
        vec.at[a] <= x < vec.at[b]
        を満たすxを削除してくれる．
    */

    vec02.erase(vec02.begin(), vec02.begin() + 2);
    for (int x : vec02)
    {
        /* code */
        cout << x << " ";
    }
    cout << endl;

    vector<int> v = {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1};
    sort(v.begin(), v.end());
    printVec(v);
    unique(v.begin(), v.end());
    printVec(v);
    v.erase(v.begin(), v.end());
    printVec(v);
}