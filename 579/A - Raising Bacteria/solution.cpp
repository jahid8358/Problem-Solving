#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n;
    cin >> n;
    int ans = 0;
    while(n > 0) {
        ans += n % 2;
        n /= 2;
    }
    cout << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    //cin >> t;
    while (t--){
        bankai();
    }
 
    return 0;
}