#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        int A[n + 1];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i];
        }
        int a = sum, flag = 0;
        if(sum % 2 != 0 ) cout << "NO" << endl;
        else{
            for(int i = 0; i < n; i++){
                if((sum - A[i]) == a /2){
                    flag = 1;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}