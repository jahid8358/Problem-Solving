#include <bits/stdc++.h>
using namespace std;
 
int bankai(vector<int> &a, int x)
{
    int l = 0;
    int r = a.size() - 1;
 
    int ans = -1;
 
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
 
        if (a[mid] == x)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (a[mid] < x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
 
    return ans + 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
 
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int value = bankai(a, x);
        cout << value << "
";
    }
    return 0;
}