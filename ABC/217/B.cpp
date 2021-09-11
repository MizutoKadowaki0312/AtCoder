#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    string answer[4] = {"ABC", "ARC", "AGC", "AHC"};

    vector<string> Q(3);
    for (int i = 0; i < Q.size(); i++)
    {
        cin >> Q[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < Q.size(); j++)
        {
            if (answer[i] == Q[j])
            {
                answer[i] = "1";
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (answer[i] != "1")
        {
            cout << answer[i] << endl;
        }
    }
}
