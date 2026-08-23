#include <iostream>
using namespace std;
int main()
{
   long long t;
   cin>>t;
  long long count;
  
 if(t%2==0)
   count =t/2;
 else 
   count=-(t+1)/2;
   
   cout<<count<<endl;
    return 0;
}