/*
 *       ___      _       _   _   _   ____
 *      |_  |    / \     | | | | | | |  _ \
 *        | |   / _ \    | |_| | | | | | | |
 *    | |_| |  / ___ \   |  _  | | | | |_| |
 *     \___/  /_/   \_\  |_| |_| |_| |____/
 *
 *    Problem:  A_Arrival_of_the_General
 *    Time:     12-08-2026 09:39
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
    int maxi = 0;
    int mini = 101;
    int maxi_index;
    int mini_index;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxi)
        {
            maxi_index = i + 1;
            maxi = a[i];
        }
        if (a[i] <= mini)
        {
            mini_index = i + 1;
            mini = a[i];
        }
    }
    if (maxi_index < mini_index)
        cout << maxi_index - 1 + n - mini_index << endl;
    else
        cout << maxi_index - 2 + n - mini_index << endl;
}
 
int main()
{
    fastio();
 
    int t = 1;
    while (t--)
    {
        solve();
    }
 
    return 0;
}