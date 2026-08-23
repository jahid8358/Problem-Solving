#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
 
    int left = 240 - k;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i * 5 > left)
            break;
        ans++;
        left -= i * 5;
    }
    cout << ans << endl;
    return 0;
}