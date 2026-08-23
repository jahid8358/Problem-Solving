#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool flag = true;
 
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int i = 1; i <= m; i++)
                cout << "#";
            cout << "
";
        }
        else
        {
            if (flag)
            {
                for (int i = 1; i <= m - 1; i++)
                    cout << ".";
                cout << "#
";
                flag = false;
            }
            else
            {
                cout << "#";
                for (int i = 1; i <= m - 1; i++)
                    cout << ".";
                cout << "
";
                flag = true;
            }
        }
    }
    return 0;
}