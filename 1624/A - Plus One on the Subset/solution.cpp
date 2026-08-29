#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int biggest=INT_MIN;
        int smallest=INT_MAX;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]>biggest) biggest=a[i];
            if(a[i]<smallest) smallest=a[i];
        }
    cout <<biggest-smallest<< endl;    
    }
 
    return 0;
}
    