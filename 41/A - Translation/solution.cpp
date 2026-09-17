#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int length = s.length();
    for(int i=0; i<length/2; i++) {
        swap(s[i], s[length-i-1]);
    }
    if(s == t)
    cout << "YES
";
    else
    cout << "NO
";
    return 0;
}