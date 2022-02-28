#include "bits/stdc++.h"
using namespace std;
// compile : g++ -std=c++17 hogehoge.cpp

int main()
{
    // string str1;
    // string str2;

    // cin >> str1;
    // str2 = ", world!";

    // cout << str1 << str2 << endl;
    string str = "Hello";
    cout << str.size() << endl;
    cout << str.at(0) << endl;
    cout << str.at(4) << endl;

    for (int i = 0; i < str.size(); i++)
    {
        /* code */
        cout << str.at(i) << endl;
    }

    char c = 'a';
    cout << c << endl;

    c = str.at(0);
    cout << c << endl;

    str.at(0) = 'M';
    cout << str << endl;

    if (str.at(1) == 'e')
    {
        /* code */
        cout << "AtCoder" << endl;
    }

    string s1 = "ABC";
    string s2 = "ABC";
    string s3 = "XY";
    string s4 = "YZ";

    if (s1 == s2)
    {
        /* code */
        cout << "ABC == ABC" << endl;
    }

    if (s1 < s3)
    {
        /* code */
        cout << "ABC < XY" << endl;
    }
    if (s3 < s4)
    {
        /* code */
        cout << "XY < YZ" << endl;
    }

    string s5 = "Hello";
    cout << s5 + ", world!" << endl;

    s5 += ", AtCoder!";
    cout << s5 << endl;

    c = s5.at(0);
    cout << s5 + c << endl;

    string s, t;
    getline(cin, s);
    getline(cin, t);

    cout << "line01 : " << s << endl;
    cout << "line02 : " << t << endl;
}