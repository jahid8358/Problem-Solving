#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int s = 0, d = 0;
    bool flag = true;
    int i, j;
    for (i = n - 1, j = 0; j <= i;)
    {
        if (flag == true)
        {
            if (a[j] > a[i])
            {
                s += a[j];
                j++;
            }
            else
            {
                s += a[i];
                i--;
            }
            flag = false;
        }
        else
        {
            if (a[j] > a[i])
            {
                d += a[j];
                j++;
            }
            else
            {
                d += a[i];
                i--;
            }
            flag = true;
        }
    }
    cout << s << " " << d << "
";
    return 0;
}