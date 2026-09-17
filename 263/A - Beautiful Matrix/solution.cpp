#include<iostream>
using namespace std;
int main(){
    int count = 0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int x;
            cin >> x;
            if(x){
                if(i==1 || i==5)
                count += 2;
                if(i==2 || i==4)
                count += 1;
                if(j==1 || j==5)
                count += 2;
                if(j==2 || j==4)
                count += 1;
            }
        }
    }
    cout << count <<endl;
    return 0;
}