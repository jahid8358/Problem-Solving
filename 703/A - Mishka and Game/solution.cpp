/*
 *       ___      _       _   _   _   ____
 *      |_  |    / \     | | | | | | |  _ \
 *        | |   / _ \    | |_| | | | | | | |
 *    | |_| |  / ___ \   |  _  | | | | |_| |
 *     \___/  /_/   \_\  |_| |_| |_| |____/
 *
 *    Problem:  A_Mishka_and_Game
 *    Time:     14-08-2026 18:14
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
    pair<int, int> round;
    int m = 0, c = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> round.first >> round.second;
        if (round.first > round.second)
            m++;
        else if (round.first < round.second)
            c++;
    }
    if (m > c)
        cout << "Mishka
";
    else if (c > m)
        cout << "Chris
";
    else
        cout << "Friendship is magic!^^
";
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