#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1];
        int high = 0, low = 1e9 + 10;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        for(int i = 0; i < n; i++){
            high = max(high, A[i]);
            low = min(low, A[i]);
        }
        cout << high - low << endl;
    }
    return 0;
}