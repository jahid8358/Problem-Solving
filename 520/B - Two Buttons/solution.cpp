#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 int step=0;
 while(m>n){
    if(m%2==0)
    {m/=2;
    step++;
 }
else{
    m++;
    step++;
}}
if(m<n){
    step+=(n-m);
}
cout<<step<<endl;
    return 0;
}