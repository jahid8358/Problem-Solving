#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int capacity = 0;
    int currentCapacity = 0;
    
    while(n--) {
        int a, b;
        cin >> a >> b;
        currentCapacity -= a;
        currentCapacity += b;
        capacity = max(capacity, currentCapacity);
    }
 
    cout << capacity << endl;;
    return 0;
}