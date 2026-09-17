#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
 
    int x = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[j] == x){
                b[i] = j+1;
                x++;
                break;
            }
        }
    }
 
    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }
    return 0;
}