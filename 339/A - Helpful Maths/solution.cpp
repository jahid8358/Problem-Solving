#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int o = 0, t = 0, th = 0;
    for (int i = 0; i < s.length(); i += 2)
    {
        if (s[i] == '1')
            o++;
        else if (s[i] == '2')
            t++;
        else
            th++;
    }
    int flag = 0;
 
    for (int i = 0; i < o; i++)
    {
        if (flag == 0)
        {
            cout << "1";
            flag = 1;
        }
        else
            cout << "+1";
    }
 
    for (int i = 0; i < t; i++)
    {
        if (flag == 0)
        {
            cout << "2";
            flag = 1;
        }
        else
            cout << "+2";
    }
 
    for (int i = 0; i < th; i++)
    {
        if (flag == 0)
        {
            cout << "3";
            flag = 1;
        }
        else
            cout << "+3";
    }
    return 0;
}