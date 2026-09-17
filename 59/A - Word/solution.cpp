#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int up = 0, low = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 97)
        low++;
        else
        up++;
    }
    if(low>=up){
    for(int i=0; i<s.length(); i++){
        if(s[i]<97)
        s[i] += 32;
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
        if(s[i]>=97)
        s[i] -= 32;
        }
    }
    cout << s << endl;
    return 0;
}