#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1, s2, s;
    cin >> s1;
    cin >> s2;
    cin >> s;
 
    int a[26] = {};
    int b[26] = {};
 
    for (int i = 0; i < s1.length(); i++)
        a[s1[i] - 'A']++;
 
    for (int i = 0; i < s2.length(); i++)
        a[s2[i] - 'A']++;
 
    for (int i = 0; i < s.length(); i++)
        b[s[i] - 'A']++;
 
    bool flag = true;
 
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            flag = false;
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