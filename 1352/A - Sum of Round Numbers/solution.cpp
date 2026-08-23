#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int d = 1;
    vector<int> a;
    while (n > 0)
    {
        if (n % 10 != 0)
            a.push_back((n % 10) * d);
        n /= 10;
        d *= 10;
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}