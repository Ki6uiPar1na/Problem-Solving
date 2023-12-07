#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        while (a--)
        {
            int c;
            cin >> c;
            if (c <= b)
            {
                cout << "1";
                b=b-c;
            }
            else
                cout << "0";
        }
        cout << endl;
    }
}