#include<bits/stdc++.h>
using namespace std;
 
void luffy(){
    char c;
    cin>>c;
 
    if(c=='c' || c=='o' ||c=='d'||c=='e' ||c=='f' ||c=='o' ||c=='r'  ||c=='c' ||c=='e' ||c=='s')
    cout<<"YES
";
    else 
    cout<<"NO
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