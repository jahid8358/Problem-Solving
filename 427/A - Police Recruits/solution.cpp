#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    int crime = 0, man = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1 && man == 0)
            ans++;
        else if (a[i] == -1 && man != 0)
            man--;
        else
            man += a[i];
    }
    cout << ans << endl;
 
    return 0;
}