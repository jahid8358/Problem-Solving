/*
 *       ___      _       _   _   _   ____
 *      |_  |    / \     | | | | | | |  _ \
 *        | |   / _ \    | |_| | | | | | | |
 *    | |_| |  / ___ \   |  _  | | | | |_| |
 *     \___/  /_/   \_\  |_| |_| |_| |____/
 *
 *    Problem:  A_DBMB_and_the_Array
 *    Time:     25-08-2026 10:22
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
    int n, s, x;
    cin >> n >> s >> x;
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int left = s - sum;
    if (left % x != 0 || sum > s)
        cout << "NO
";
    else
        cout << "YES
";
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