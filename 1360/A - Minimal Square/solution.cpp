#include <iostream>
#include<string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a,b;
        cin>>a>>b;
 
        int smaller=min(a,b);
        int bigger=max(a,b);
 
        if(bigger>(2*smaller))
            cout <<bigger*bigger << endl;
        else
            cout <<(2*smaller)*(2*smaller) << endl;
    }
    return 0;
}