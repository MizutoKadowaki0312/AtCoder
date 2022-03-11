#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // int a;
    // cin >> a;

    // vector<int> data(5);
    // for (int i = 0; i < data.size(); i++)
    // {
    //     /* code */
    //     cin >> data.at(i);
    // }

    // int answer = 0;

    // for (size_t i = 0; i < data.size(); i++)
    // {
    //     /* code */
    //     if (data.at(i) == a)
    //     {
    //         /* code */
    //         answer += 1;
    //     }
    // }

    // cout << answer << endl;

    vector<int> a = {1, 3, 2, 5};
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        cout << a.at(i) << endl;
    }

    // The range based for statement
    for (int x : a)
    {
        /* code */
        cout << x << endl;
    }

    a = {1, 3, 1, 2, 5, 10};
    for (int x : a)
    {
        /* code */
        if (x == 1)
        {
            /* code */
            continue;
        }
        else if (x == 5)
        {
            /* code */
            break;
        }
        cout << x << endl;
    }

    // container
    string str = "hello";
    for (char c : str)
    {
        /* code */
        if (c == 'l')
        {
            /* code */
            c = 'L';
        }
        cout << c;
    }
    cout << endl;

    int N;
    cin >> N;

    int count = 0;
    while (N > 0)
    {
        if (N % 2 != 0)
        {
            /* code */
            break;
        }
        N = N / 2;
        count += 1;
    }
    cout << count << endl;
}