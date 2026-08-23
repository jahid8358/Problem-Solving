#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int initial = 'a';
    int total = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (initial == s[i])
            continue;
 
        int d = abs(initial - s[i]);
        if (d < (26 - d))
            total += d;
        else
            total += 26 - d;
 
        initial = s[i];
    }
    cout << total << endl;
    return 0;
}