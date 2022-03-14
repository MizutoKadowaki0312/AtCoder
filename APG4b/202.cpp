#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // int N = 3;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         /* code */
    //         cout << "i = " << i << " "
    //              << "j = " << j << endl;
    //     }

    //     for (int i = 0; i < N; i++)
    //     {
    //         for (int j = 0; j < N; j++)
    //         {
    //             /* code */
    //             for (int k = 0; k < N; k++)
    //             {
    //                 cout << "i = " << i << " "
    //                      << "j = " << j << " "
    //                      << "k = " << k << endl;
    //             }
    //         }
    //     }
    // }

    // // example
    // vector<int> A(3);
    // vector<int> B(3);
    // for (int i = 0; i < A.size(); i++)
    // {
    //     cin >> A.at(i);
    // }
    // for (int i = 0; i < B.size(); i++)
    // {
    //     cin >> B.at(i);
    // }
    // /*
    //     存在するか否かのYES/NO問題なのでboolに回答を収納する ← なるほど
    // */
    // bool answer = false;

    // // not use loop
    // if (A.at(0) == B.at(0) || A.at(0) == B.at(1) || A.at(0) == B.at(2) || A.at(1) == B.at(0) || A.at(1) == B.at(1) || A.at(1) == B.at(2) || A.at(2) == B.at(0) || A.at(2) == B.at(1) || A.at(2) == B.at(2))
    // {
    //     /* code */
    //     answer = true;
    // }
    // if (answer)
    // {
    //     /* code */
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    // // use loop
    // answer = false;
    // for (int i = 0; i < A.size(); i++)
    // {
    //     /* code */
    //     for (int j = 0; j < B.size(); j++)
    //     {
    //         /* code */
    //         if (A.at(i) == B.at(j))
    //         {
    //             /* code */
    //             answer = true;
    //         }
    //     }
    // }
    // if (answer)
    // {
    //     /* code */
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    int sum = 0;
    bool finished = false;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            /* code */
            sum += i * j;
            cout << "i = " << i << " "
                 << "j = " << j << " "
                 << "sum = " << sum << endl;
            if (sum > 1000)
            {
                /* code */
                cout << "i = " << i << " "
                     << "j = " << j << " "
                     << "sum = " << sum << endl;
                finished = true;
                break;
            }
        }
        if (finished)
        {
            /* code */
            break;
        }
    }

    cout << "sum = " << sum << endl;
}