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
        string s;
        cin >> s;
        int maxl = 0, m = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
            {
                m++;
                maxl = max(m, maxl);
            }
            else
                m = 0;
        }
        if (maxl % 2 == 0)
            cout << maxl / 2 << endl;
        else
            cout << (maxl / 2) + 1 << endl;
    }
    return 0;
}