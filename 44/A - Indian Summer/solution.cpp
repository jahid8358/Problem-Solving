#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    set<pair<string, string>> a;
 
    while (n--)
    {
        string x, y;
        cin >> x >> y;
        a.insert({x, y});
    }
    cout << a.size() << "
";
 
    return 0;
}