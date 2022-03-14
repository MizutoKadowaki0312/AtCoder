#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // vector<vector<int>> data = {
    //     {7, 4, 0, 8},
    //     {2, 0, 3, 5},
    //     {6, 1, 7, 0},
    // };
    // //  行を取得
    // cout << data.size() << endl;

    // // 列を取得
    // cout << data.at(0).size() << endl;

    // int type の2次元配列(3 * 4)の宣言
    // vector<vector<int>> data(3, vector<int>(4));

    // // input element
    // for (int i = 0; i < data.size(); i++)
    // {
    //     /* code */
    //     for (int j = 0; j < data.at(0).size(); j++)
    //     {
    //         /* code */
    //         cin >> data.at(i).at(j);
    //     }
    // }

    // int count = 0;

    // for (int i = 0; i < data.size(); i++)
    // {
    //     /* code */
    //     for (int j = 0; j < data.at(0).size(); j++)
    //     {
    //         /* code */
    //         if (data.at(i).at(j) == 0)
    //         {
    //             /* code */
    //             count += 1;
    //         }
    //     }
    // }

    // cout << count << endl;

    // ジャグ配列
    // int N = 3;
    // vector<vector<int>> data(N);

    // for (int i = 0; i < data.size(); i++)
    // {
    //     /* code */
    //     for (int j = 0; j < data.at(0).size(); j++)
    //     {
    //         /* code */
    //         cout << data.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    // cout << data.size() << " " << data.at(0).size() << endl;

    // data.at(0).push_back(1);
    // data.at(0).push_back(2);
    // data.at(0).push_back(3);

    // data.at(1).push_back(4);
    // data.at(1).push_back(5);
    // data.at(1).push_back(6);
    // data.at(1).push_back(7);

    // data.at(2).push_back(8);
    // data.at(2).push_back(9);

    // cout << data.size() << " " << data.at(0).size() << endl;
    // cout << data.size() << " " << data.at(1).size() << endl;
    // cout << data.size() << " " << data.at(2).size() << endl;

    // int N;
    // cin >> N;

    // int Size = 3;

    // // declar N * 3 * 3 matrix
    // vector<vector<vector<char>>> data(N, vector<vector<char>>(Size, vector<char>(Size)));

    // // cout << data.size() << endl;             //何枚目？のサイズ
    // // cout << data.at(0).size() << endl;       //１枚目の，縦サイズ
    // // cout << data.at(0).at(0).size() << endl; //１枚目の縦サイズの１つ目配列の要素数

    // // input elements
    // for (int i = 0; i < N; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < Size; j++)
    //     {
    //         /* code */
    //         for (int k = 0; k < Size; k++)
    //         {
    //             cin >> data.at(i).at(j).at(k);
    //         }
    //     }
    // }

    // // count number of 'o'
    // int count = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < Size; j++)
    //     {
    //         /* code */
    //         for (int k = 0; k < Size; k++)
    //         {
    //             if (data.at(i).at(j).at(k) == 'o')
    //             {
    //                 /* code */
    //                 count += 1;
    //             }
    //         }
    //     }
    // }

    // cout << count << endl;

    vector<vector<vector<int>>> data =
        {
            {
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
            },
            {
                {13, 14, 15, 16},
                {17, 18, 19, 20},
                {21, 22, 23, 24},
            },
        };

    int size01 = data.size();
    int size02 = data.at(0).size();
    int size03 = data.at(0).at(0).size();

    cout << size01 << endl; // 2
    cout << size02 << endl; // 3
    cout << size03 << endl; // 4
}