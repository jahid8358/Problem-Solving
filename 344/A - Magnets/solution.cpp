#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int arr[t];
 
  for (int i = 0; i < t; i++)
    cin >> arr[i];
 
  int val = arr[0];
  int count = 1;
 
  for (int i = 0; i < t - 1; i++)
  {
    if (val != arr[i + 1])
      count++;
    val = arr[i + 1];
  }
  cout << count << endl;
  return 0;
}