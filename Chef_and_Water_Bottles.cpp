#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--){
        int a, b, c, i;
        cin >> a >> b >> c;

        if ((a * b) < c) cout << a << endl;
        else {
            cout << c/b << endl;
        }
    }
    return 0;
}