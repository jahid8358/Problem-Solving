#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c)
    cout<<"+
";
    else 
    cout<<"-
";
 
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    while(n--)
    solve();
 
    return 0;
}