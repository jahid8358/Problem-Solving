/*
 *       ___      _       _   _   _   ____
 *      |_  |    / \     | | | | | | |  _ \
 *        | |   / _ \    | |_| | | | | | | |
 *    | |_| |  / ___ \   |  _  | | | | |_| |
 *     \___/  /_/   \_\  |_| |_| |_| |____/
 */
#include <bits/stdc++.h>
using namespace std;
 
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define endl '
'
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
    vi a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    vi b = a;
    sort(all(b));
    for (int i = 0; i < n; i++)
    {
        {
            if (a[i] != b[1])
                cout << i + 1 << endl;
        }
    }
}
 
int main()
{
    fastio();
 
    int t = 1;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}