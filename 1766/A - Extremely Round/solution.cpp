#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int ans = 0;
    
    if (n < 10) {
        ans = n;
    } else if (n < 100) {
        ans = 9 + (n / 10);
    } else if (n < 1000) {
        ans = 18 + (n / 100);
    } else if (n < 10000) {
        ans = 27 + (n / 1000);
    } else if (n < 100000) {
        ans = 36 + (n / 10000);
    } else {
        ans = 45 + (n / 100000);
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}