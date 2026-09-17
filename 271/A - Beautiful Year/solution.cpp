#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(1){
        n++;
        string s = to_string(n);
        set<char> ss;
        for(int i=0; i<s.length(); i++){
            ss.insert(s[i]);
        }
        if(ss.size() == 4){
            cout << n << endl;
            return 0;
        }
    }
}