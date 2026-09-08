#include <iostream>
#include<string>
using namespace std;
 
int main() {
    int t=1;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
 
        bool flag=false;
        int i=0;
 
        for(; i<=6; i++) {
            if((int)x.find(s)!=-1) {
                flag=true;
                break;
            }
            x+=x;
        }
        if(flag)
            cout <<i<< endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}