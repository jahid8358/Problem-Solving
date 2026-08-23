#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
 
    bool flag = true;
 
    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] > 1)
        {
            flag = false;
            break;
        }
 
    if (flag)
        cout << "YES
";
    else
        cout << "NO
";
 
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}