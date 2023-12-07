#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i];
        }
        cout << abs(abs(sum) - n) << endl;
    }
    return 0;
}