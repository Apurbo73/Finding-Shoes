
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b;
        if (a * 2 == b)
        {
            cout << b - a << endl;
        }
        else if (a > b)
        {
            cout << a * 2 - b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}