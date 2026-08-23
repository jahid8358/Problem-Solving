#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k;
    cin >> n >> k;
    int a[k], b[k];
 
    for (int i = 0; i < k; i++)
        cin >> a[i] >> b[i];
 
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
        }
    }
 
    int total = n;
    bool flag = true;
    for (int i = 0; i < k; i++)
    {
        if (total > a[i])
            total += b[i];
        else
        {
            flag = false;
            break;
        }
    }
 
    if (flag == true)
        cout << "YES
";
    else
        cout << "NO
";
 
    return 0;
}