#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
                ans++;
        }
        if (ans % 2 == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}