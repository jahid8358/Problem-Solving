#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int count =0;
   for(int i=1; i<=t; i++)
   {
      int a,b;
      cin>>a>>b;
      if((b-a)>1)
      count++;     
   }
   cout<<count<<endl;
    return 0;
}