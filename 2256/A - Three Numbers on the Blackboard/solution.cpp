#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
 
    if (a[0] == a[1] && a[1] == a[2])
    {
        cout << "0
";
        return;
    }
    else if ((a[0] + a[1]) >= a[2])
    {
        cout << a[2] - a[0] << "
";
        return;
    }
    else
    {
        a[2] = a[0] + a[1];
        cout << a[2] - a[0] << "
";
        return;
    }
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