#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n, k;
    cin >> n >> k;
 
    long long x = (n + 1) / 2;
 
    if (k <= x)
        cout << (k * 2) - 1 << endl;
    else
        cout << (k - x) * 2 << endl;
 
    return 0;
}