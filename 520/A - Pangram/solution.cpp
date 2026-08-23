#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cin >> n;
 
  string s;
  cin >> s;
 
  int a[26] = {};
 
  for (int i = 0; i < s.length(); i++)
  {
    s[i] = tolower(s[i]);
 
    a[s[i] - 'a']++;
  }
 
  for (int i = 0; i < 26; i++)
  {
    if (a[i] == 0)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
 
  return 0;
}