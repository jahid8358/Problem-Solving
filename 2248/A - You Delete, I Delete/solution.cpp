#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    cin >> s;
    bool zero = true;
    bool one = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && zero==true)
        {
            s.erase(i, 1);
            zero = false;
            i--;
        }
        if (s[i] == '1' && one == true)
        {
            s.erase(i, 1);
            one = false;
            i--;
        }
        if (zero == false && one == false)
            break;
    }
    cout << s << "
";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}