#include "bits/stdc++.h"
using namespace std;

int main()
{
    int p;
    cin >> p;

    int price;
    int N;

    if (p == 1)
    {
        /* code */
        cin >> price;
        cin >> N;

        cout << N * price << endl;
    }
    else if (p == 2)
    {
        string text;
        cin >> text;
        cin >> price;
        cin >> N;

        cout << text << "!" << endl;
        cout << N * price << endl;
    }
}
