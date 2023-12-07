#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1], B[n + 1];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        for(int i = 0, j = 0; i < n, j < n; i++, j++){
            B[i] = A[i];
        }
        // for(int i = 0; i < n; i++){
        //     cout << B[i] << ' ';
        // }
        // cout << endl;
        sort(A, A + n);
        int high = A[n - 1];
        int second_high = A[n - 2];
        for(int i = 0; i < n; i++){
            if(B[i] != high){
                cout << B[i] - high << ' ';
            }
            if(B[i] == high){
                cout << B[i] - second_high << ' ';
            }
        }
        cout << endl;
        // cout << high << ' ' << second_high << endl;
    }
    return 0;
}