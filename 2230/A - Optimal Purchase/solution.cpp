#include <iostream>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  long long a, b, c;
  for (int i = 1; i <= t; i++)
  {
    cin >> a >> b >> c;
 
    if (3 * b <= c)
      cout << b * a << endl;
 
    else
    {
      long long p = (a / 3) * c;
      if (a % 3 == 0)
      {
        cout << p << endl;
      }
      else if (a % 3 == 2 && (2 * b) <= c)
      {
        p = p + (2 * b);
        cout << p << endl;
      }
      else if (a % 3 == 2 && (2 * b) >= c)
      {
        p = p + c;
        cout << p << endl;
      }
      else if (a % 3 == 1 && b <= c)
      {
        p = p + b;
        cout << p << endl;
      }
      else if (a % 3 == 1 && b >= c)
      {
        p = p + c;
        cout << p << endl;
      }
    }
  }
  return 0;
}