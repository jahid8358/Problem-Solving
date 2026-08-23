#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (a > b && a > c && a > d)
        cout << a - b << " " << a - c << " " << a - d << endl;
    else if (b > a && b > c && b > d)
        cout << b - a << " " << b - c << " " << b - d << endl;
    else if (c > a && c > b && c > d)
        cout << c - a << " " << c - b << " " << c - d << endl;
    else
        cout << d - a << " " << d - b << " " << d - c << endl;
 
    return 0;
}