#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total1 += a[i];
    }
    vector<long long> b(n - 1);
    long long total2 = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        total2 += b[i];
    }
    vector<long long> c(n - 2);
    long long total3 = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        total3 += c[i];
    }
 
    cout << total1 - total2 << endl;
    cout << total2 - total3 << endl;
    return 0;
}