#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    N = 3;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }
    //文字列
    string str;
    str = "abcd";
    cout << str.at(0) << endl;
    cout << str.size() << endl;

    //配列
    vector<int> v;
    v = {25, 100, 64};
    cout << v.at(0) << endl;
    cout << v[0] << endl;
    cout << v.size() << endl;
}
