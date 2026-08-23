/*
 *       ___      _       _   _   _   ____
 *      |_  |    / \     | | | | | | |  _ \
 *        | |   / _ \    | |_| | | | | | | |
 *    | |_| |  / ___ \   |  _  | | | | |_| |
 *     \___/  /_/   \_\  |_| |_| |_| |____/
 *
 *    Problem:  A_Cover_in_Water
 *    Time:     13-08-2026 21:45
 */
 
#include <bits/stdc++.h>
using namespace std;
 
// Fast I/O
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
// Macros
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define endl '
'
 
// Typedefs
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
    bool flag = false;
    int ans = 0;
    for (int i = 0; i < n - 1 - 1; i++)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            flag = true;
            break;
        }
        if (s[i] == '.')
            ans++;
    }
    if (s[n - 1] == '.')
        ans++;
    if (s[n - 2] == '.')
        ans++;
 
    if (flag)
        cout << "2
";
    else
        cout << ans << endl;
 
    return;
}
 
int main()
{
    fastio();
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}