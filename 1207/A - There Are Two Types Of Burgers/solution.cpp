#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int bun, beef, cutlet;
        cin >> bun >> beef >> cutlet;
        int ham, chiken;
        cin >> ham >> chiken;
 
        int nham = 0, nchiken = 0;
 
        if (ham > chiken)
        {
            if (((bun / 2) < beef))
                nham += bun / 2;
            else
            {
                nham = beef;
                bun -= beef * 2;
                if ((bun / 2) < cutlet)
                    nchiken += bun / 2;
                else
                    nchiken += cutlet;
            }
        }
        else
        {
            if ((bun / 2) < cutlet)
                nchiken += bun / 2;
            else
            {
                nchiken += cutlet;
                bun -= cutlet * 2;
                if ((bun / 2) < beef)
                    nham += bun / 2;
                else
                    nham += beef;
            }
        }
        int total = (nham * ham) + (nchiken * chiken);
        cout << total << endl;
    }
    return 0;
}