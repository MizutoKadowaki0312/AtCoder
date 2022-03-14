#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> score(N, vector<char>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            /* code */
            score.at(i).at(j) = '-';
        }
    }

    //配列で処理できるように1~Nを0~N-1に整理する
    for (int i = 0; i < M; i++)
    {
        /* code */
        A.at(i) -= 1;
        B.at(i) -= 1;

        score.at(A.at(i)).at(B.at(i)) = 'o';
        score.at(B.at(i)).at(A.at(i)) = 'x';
    }

    // output
    for (int i = 0; i < N; i++)
    {
        /* code */
        for (int j = 0; j < N; j++)
        {
            /* code */
            cout << score.at(i).at(j);
            if (j == N - 1)
            {
                /* code */
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
}