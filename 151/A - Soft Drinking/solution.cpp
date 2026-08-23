#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int drink = (k * l) / nl;
    int slice = (c * d) / 1;
    int salt = p / np;
    if (drink < slice && drink < salt)
        cout << drink / n << endl;
    else if (slice < drink && slice < salt)
        cout << slice / n << endl;
    else
        cout << salt / n << endl;
    return 0;
}