#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int my_min(int x, int y)
{
    if (x < y)
    {
        /* code */
        return x;
    }
    else
    {
        return y;
    }
}

// 返り値がないのでvoidを指定
void hello(string text)
{
    cout << "Hello, " << text << endl;
    return;
}

int input()
{
    int x;
    cin >> x;
    return x;
}

int main()
{
    int answer = my_min(10, 5);
    cout << answer << endl;

    hello("Tom");
    hello("C++");

    int num = input();
    cout << num + 5 << endl;
}