#include<bits/stdc++.h>
using namespace std;
 
void luffy(){
   int n;
   cin>>n;
  
  int a[n];
  int ans=0;
 int dns=0;
 
  for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]==0)
    dns++;
    ans=max(ans,dns);
    if(a[i]==1)
    dns=0;
  }
  cout<<ans<<"
";
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    while(n--)
    luffy();
 
    return 0;
}