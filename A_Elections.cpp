#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b and b == c and c == a){
            cout << a + 1 << ' ' << b + 1 << ' ' << c + 1 << endl;
        }
        else{
            int high = a;
            high = max(high, b);
            high = max(high, c);
            if(a != high){
                cout << (high - a) + 1 << ' ';
            }
            else{
                cout << 0 << ' ';
            }
            if(b != high){
                cout << (high - b) + 1 << ' ';
            }
            else{
                cout << 0 << ' ';
            }
            if(high != c){
                cout << (high - c) + 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}