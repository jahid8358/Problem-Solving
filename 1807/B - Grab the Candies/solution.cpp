#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int even=0,odd=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            (a[i]%2==0? even+=a[i]:odd+=a[i]);
        }
        (even>odd? cout<<"YES
":cout<<"NO
");
    }
 
    return 0;
}