#include<bits/stdc++.h>
using namespace std;
 
void luffy(){
   int a,b,c,d;
   cin>>a>>b>>c>>d;
  
  int ans=0;
   if(a<b) ans++;
   if(a<c) ans++;
   if(a<d) ans++;
 
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