#include <bits/stdc++.h>
using namespace std;
 
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int r, b;
    cin >> r >> b;
    int fashion = min(r, b);
    int solo = max(r, b) - fashion;
    cout << fashion << " " << solo / 2 << "
";
    return 0;
}