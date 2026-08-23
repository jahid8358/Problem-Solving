#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a = s1[i] - '0';
        int b = s2[i] - '0';
 
        int d = a - b;
        if (d < 0)
            d = d * -1;
 
        if (d > (10 - d))
            count += 10 - d;
        else
            count += d;
    }
    cout << count << endl;
 
    return 0;
}