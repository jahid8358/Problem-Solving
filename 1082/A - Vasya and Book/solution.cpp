#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
 
        if (y >= x && (y - x) % d == 0)
        {
            cout << (y - x) / d << "
";
            continue;
        }
        if (x > y && (x - y) % d == 0)
        {
            cout << (x - y) / d << "
";
            continue;
        }
        if ((y - 1) % d != 0 && (n - y) % d != 0)
        {
            cout << -1 << "
";
            continue;
        }
        int fcount = 0;
        int bcount = 0;
 
        int temp = x;
 
        if ((y - 1) % d == 0)
        {
            while (x != 1)
            {
                x = x - d;
                bcount++;
                if (x <= 1)
                    x = 1;
            }
            bcount = bcount + (y - 1) / d;
        }
 
        x = temp;
 
        if ((n - y) % d == 0)
        {
            while (x != n)
            {
                x = x + d;
                fcount++;
                if (x >= n)
                    x = n;
            }
            fcount = fcount + (n - y) / d;
        }
 
        if (bcount != 0 && fcount != 0)
        {
            if (bcount < fcount)
                cout << bcount << "
";
            else
                cout << fcount << "
";
        }
        else if (bcount != 0)
            cout << bcount << "
";
        else
            cout << fcount << "
";
    }
    return 0;
}