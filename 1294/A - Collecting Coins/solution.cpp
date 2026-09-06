#include <iostream>
#include<string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
 
        int mx=max({a,b,c});
        int equalization=(mx-a)+(mx-b)+(mx-c);
        int ncoins=n-equalization;
        
        if(equalization>n || ncoins%3!=0)
        cout << "NO" << endl;
        else 
        cout << "YES" << endl;
    }
    return 0;
}
    