#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if((a * b) % 2 == 0){
            cout << (a * b) / 2 << endl;
        }
        if((a * b) % 2 != 0){
            cout << ((a * b) / 2) + 1 << endl;
        }
    }
    return 0;
}