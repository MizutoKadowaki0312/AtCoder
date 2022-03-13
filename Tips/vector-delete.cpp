#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

// Functions with no return value use void.
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
    vector<int> vec = {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1};
    cout << "origin : ";
    printVec(vec);

    //  adopt unique
    /*
        `unique`は隣り合った要素が同一であった場合に重複部分を詰めることができる．
        詰められてあいた分は他の要素で埋められるようだ．
    */
    vector<int> vec01 = vec;
    unique(vec01.begin(), vec01.end());
    cout << "unique : ";
    printVec(vec01);

    // adopt unique after sort
    /*
        sort : 配列の要素を昇順に並べる．
        sortしてuniqueすると重複要素は消えてくれるけど空いた要素に他の数字(ゴミ)で埋められて配列の要素数としては変わらない．
    */
    vector<int> vec02 = vec;
    sort(vec02.begin(), vec02.end());
    cout << "sort only : ";
    printVec(vec02);
    unique(vec02.begin(), vec02.end());
    cout << "unique after sort : ";
    printVec(vec02);

    // adopt erase after unique and sort
    /*

    */
    vector<int> vec03 = vec;
    sort(vec03.begin(), vec03.end());
    vec03.erase(unique(vec03.begin(), vec03.end()), vec03.end());
    cout << "erase after unique and sort : ";
    printVec(vec03);

    /*
        uniqueをするとゴミ要素の最初をポインタとして返すので，そこを始点としてeraseしているイメージ．
        https://qiita.com/takuya000885/items/3ead0668127033070b65
    */
}