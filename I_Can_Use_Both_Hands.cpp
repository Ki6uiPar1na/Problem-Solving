#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int l, r, m;
        cin >> l >> r >> m;
        int div;
        if((m % l != 0)){
            div = (m / l) + 1;
        }
        else{
            div = m / l;
        }
        // cout << div << endl;
        cout << div + (m / r) << endl;
    }
    return 0;
}