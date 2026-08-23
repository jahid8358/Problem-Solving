#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a[5] = {1, 5, 10, 20, 100};
    int n;
    cin >> n;
    int ans = 0, i = 4;
    while (n > 0)
    {
        if (n >= a[i])
        {
            ans += n / a[i];
            n = n % a[i];
        }
        i--;
        if (i == -1 || n <= 0)
            break;
    }
    cout << ans << "
";
    return 0;
}