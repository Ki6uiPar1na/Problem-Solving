#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> A[i];
        }
        for(int i = 1; i <= n; i += 3){
            swap(A[i + 1], A[i + 3]);
        }
        for(int i = 1; i <= n; i++){
            cout << A[i] << ' ';
        }
    }
}