#include <iostream>
using namespace std;
 
long long checking(long long x, long long y)
{
    long long z = -1;
    for (long long i = x; i <= y; i += x)
    {
        if (y % i != 0)
        {
            z = i;
            return z;
        }
    }
    return z;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x >> y;
        long long flag = checking(x, y);
        if (flag == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}