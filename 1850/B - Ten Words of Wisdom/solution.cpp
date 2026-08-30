#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        int a[n],b[n];
        int ans=0,quality =0;
        for(int i=0; i<n; i++) {
            cin>>a[i]>>b[i];
            if(a[i]<11 && b[i]>quality) {
                quality=b[i];
                ans=i+1;
            }
        }
        cout <<ans<< endl;
    }
 
    return 0;
}