#include<iostream>
using namespace std;
int main() {
 
    int n;
    cin>>n;
 
    int one=0,two=0;
 
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x==1)
            one++;
        else
            two++;
    }
    if(one==0)
    {
        for(int i=0; i<n; i++)
            cout<<"2 ";
    }
    else if(two==0)
    {
        for(int i=0; i<n; i++)
            cout<<"1 ";
    }
    else {
        cout<<"2 1 ";
           for(int i=0; i<two-1; i++)
               cout<<"2 ";
        for(int i=0; i<one-1; i++)
            cout<<"1 ";
    }
    return 0;
}