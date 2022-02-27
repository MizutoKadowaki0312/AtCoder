#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp


int main()
{
    int x;
    cout << "x = ";
    cin >> x;

    if (x < 10)
    {
        cout << "xは10より小さい" << endl;
    }


    if (x >= 20)
    {
        cout << "xは20以上" << endl;
    }
    

    if (x == 5)
    {
        cout << "xは5" << endl;
    }

    if (x >= 20)
    {
        cout << "xは100ではない" << endl;
    }

    if (x != 100)
    {
        cout << "xは100ではない" << endl;
    }

    int y;
    cout << "y = ";
    cin >> y;

    if (!(x == y)) {
    cout << "xとyは等しくない" << endl;
    }
    if (x == 10 && y == 10) {
    cout << "xとyは10" << endl;
    }
    if (x == 0 || y == 0) {
    cout << "xかyは0" << endl;
    }

    if (x < 10)
    {
        cout << "xは10より小さい" << endl;
    }
    else{
        cout << "x is larger than 10" << endl; 
    }
    
    if (x < 10)
    {
        cout << "x is smaller than 10" << endl;
    }
    else if(x > 20)
    {
        cout << "x is larger than 10 and 20" << endl;
    }
    else if (x == 15)
    {
        cout << "10 <= x <= 20 , x = 15" << endl;
    }
    else
    {
        cout << "xは10より小さくなくて、20より大きくもなくて、15でもない" << endl;
    }
    

    cout << "終了" << endl;
}