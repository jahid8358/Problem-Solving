#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
 
    vector<int> v;
    v.push_back(1);
    int ctotal = a[0];
 
    for (int i = 1; i < n; i++) {
        if (a[0] >= 2 * a[i]) {
            v.push_back(i + 1);
            ctotal += a[i];
        }
    }
 
    if (a[0] > total / 2) {
        cout << 1 <<endl;
        cout<<"1
";
    }
     else if (ctotal > total / 2) {
        cout << v.size() <<endl;
        for (int i=0; i<v.size(); i++) 
          cout << v[i] <<" ";
        cout << endl;
    }
    else 
        cout << 0 <<endl;
    
 
    return 0;
}