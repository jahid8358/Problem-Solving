#include <iostream>
#include <set>
#include <string>
 
using namespace std;
int main()
{
  string a, b;
  cin >> a;
  cin >> b;
  string c(a.size(), ' ');
 
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == b[i])
      c[i] = '0';
    else
      c[i] = '1';
  }
  cout << c << endl;
 
  return 0;
}