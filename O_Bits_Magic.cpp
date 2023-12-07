#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int a, b;
        cin >> a >> b;
        a = a | (1 << b);

        cout << a << endl;
    }
    return 0;
}