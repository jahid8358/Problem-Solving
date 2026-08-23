#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
    string h = "hello";
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == h[j])
            j++;
 
        if (j == 5)
            break;
    }
    if (j == 5)
        cout << "YES
";
    else
        cout << "NO
";
    return 0;
}