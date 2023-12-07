#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1];
        int count = 0;
        for(int i = 1; i <= n; i++){
            cin >> A[i];
            if(A[i] % 2 != 0){
                count++;
            }
        }
        if(count % 2 != 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}