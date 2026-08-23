#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
 
    while(t--) {
        long long x,y;
        cin>>x>>y;
        long long dif=x-y;
        if(dif==1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}