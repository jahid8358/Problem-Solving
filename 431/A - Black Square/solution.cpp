/*
 *       ___      _       _   _   _   ____
 *      |_  |    / \     | | | | | | |  _ \
 *        | |   / _ \    | |_| | | | | | | |
 *    | |_| |  / ___ \   |  _  | | | | |_| |
 *     \___/  /_/   \_\  |_| |_| |_| |____/
 *
 *    Problem:  A_Black_Square
 *    Time:     15-08-2026 17:26
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
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3]; // values of required calory to press i-th part
 
    int ans = 0;
 
    string s;
    cin >> s;
 
    for (int i = 0; i < s.length(); i++)
        ans += a[s[i] - '0' - 1];
 
    cout << ans << endl;
}
 
int main()
{
    fastio();
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}