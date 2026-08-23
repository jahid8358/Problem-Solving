#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int k, r;
    cin >> k >> r;
    int ans = 1;
    int price = k;
    while (price % 10 != 0 && price % 10 != r)
    {
        price += k;
        ans++;
    }
    cout << ans << endl;
    return 0;
}