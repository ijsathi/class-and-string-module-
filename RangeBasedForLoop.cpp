#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    /* for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl; // ekhane index element pabo
    } */

    // for shortcut
    for (char a : s) // ekhane puro element pabo
        cout << a << " ";
    return 0;
}