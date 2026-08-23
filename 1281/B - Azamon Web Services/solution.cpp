#include <bits/stdc++.h>
using namespace std;
 
void haki()
{
    string s, t;
    cin >> s >> t;
    if (s < t)
    {
        cout << s << "
";
        return;
    }
 
    for (int i = 0; i < s.length(); i++)
    {
        int x = i;
        for (int j = s.length() - 1; j > i; j--)
        {
            if (s[j] < s[x])
                x = j;
        }
        if (x != i && s[x] < s[i])
        {
            swap(s[x], s[i]);
            break;
        }
    }
    if (s < t)
        cout << s << "
";
    else
        cout << "---" << "
";
 
    return;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
        haki();
    return 0;
}