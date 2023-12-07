#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll dif = ceil((double)abs(a - b) / 2);
        if ((a & 1 && b & 1) || (a & 1 == 0 && b & 1 == 0)){
            cout << ceil((double)dif / c) << '\n';
        }
        else{
            cout << ceil((double)dif / c) << '\n';
        }
    }
    return 0;
}