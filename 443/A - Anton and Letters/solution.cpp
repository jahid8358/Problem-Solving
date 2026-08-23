#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int l = s.length();
    if (l < 3)
        cout << "0
";
    else
    {
        set<char> count;
        for (int i = 1; i < l; i += 3)
        {
            char c = s[i];
            count.insert(c);
        }
        cout << count.size() << endl;
    }
    return 0;
}