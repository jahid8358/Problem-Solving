#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
 
    sort(a.begin(), a.end());
    int ans = (a[2] - a[1] + (a[1] - a[0]));
    cout << ans << endl;
}
int main()
{
    int t = 1;
    while (t--)
        solve();
 
    return 0;
}