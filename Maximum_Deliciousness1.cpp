#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int A[a], B[a];
        long long int sum = 0;
        for(int i = 0; i < a; i++){
            cin >> A[i];
        }
        if(b == 1){
            for(int i = 0; i < a; i++){
                sum += A[i];
            }
            cout << sum << endl;
        }
        else{
            sort(A, A + a);
            for(int i = a - 1, j = 0; i >= 0, j < a; i--, j++){
                // cout << A[i] << ' ';
                B[j] = A[i];
            }
            // for(int i = 0; i < a; i++){
            //     cout << B[i] << ' ';
            // }
            for(int i = c-1; i <a; i += b){
                sum += B[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}