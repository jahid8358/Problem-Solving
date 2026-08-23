#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int z = 0;
    int o = 0;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            z++;
            o = 0;
        }
        else
        {
            o++;
            z = 0;
        }
        if (z == 7 || o == 7)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "YES
";
    else
        cout << "NO
";
    return 0;
}