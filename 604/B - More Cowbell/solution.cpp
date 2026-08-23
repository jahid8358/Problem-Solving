#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int p = n - k;
    int s = 2 * k - n;
 
    long long ans = a[n - 1];
    int j = n - s - 1;
    for (int i = 0; i < j; i++)
    {
        if (a[i] + a[j] > ans)
            ans = a[i] + a[j];
        j--;
    }
 
    cout << ans << endl;
    return 0;
}