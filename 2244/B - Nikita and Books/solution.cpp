#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long total = 0;
        bool flag = true;
 
        for (int i = 1; i <= n; i++)
        {
            long long a;
            cin >> a;
            total += a;
            long long need = (long long)i * (i + 1) / 2;
 
            if (total < need)
                flag = false;
        }
        if (flag == true)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}