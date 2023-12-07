#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string A;
        char a;
        cin >> A >> a;
        int len = A.length();
        if(len % 2 == 0){
            cout << "NO" << endl;
        }
        else{
            if(A[(len / 2)] == a){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
                // cout << A[(len / 2) + 1] << endl;
            }
        }
    }
    return 0;
}