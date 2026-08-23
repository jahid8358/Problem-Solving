#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
 
    int count = 0;
    int flag = 1;
    int l = s.length();
 
    while (flag)
    {
        flag = 0;
        for (int i = 0; i < l - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                count++;
                l -= 2;
                flag = 1;
                break;
            }
        }
    }
    if (count % 2 == 0)
        cout << "No
";
    else
        cout << "Yes
";
}