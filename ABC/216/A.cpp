#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    //入力される実数
    double N;

    cin >> N;

    int X;
    X = int(N);

    int Y;
    Y = (N - int(N)) * 10;

    /*
    cout << N << endl;
    cout << X << endl;
    cout << Y << endl;
    */

    if (0 <= Y && Y <= 2)
    {
        cout << X << "-" << endl;
    }
    else if (3 <= Y && Y <= 6)
    {
        cout << X << endl;
    }
    else if (7 <= Y && Y <= 9)
    {
        cout << X << "+" << endl;
    }
}