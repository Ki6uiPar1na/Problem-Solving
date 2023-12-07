#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> A[i];
        }
        int target = 0, index_target = 0;
        for(int i = 1; i <= n; i++){
            if(A[i] > i){
                target = max(target, A[i] - i);
            }
        }
        cout << target << endl;
    }
    return 0;
}