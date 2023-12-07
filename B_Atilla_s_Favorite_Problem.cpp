#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char A[n + 1];
        cin >> A;
        int high = 0;
        for(int i = 0; i < n; i++){
            high = max(high , (A[i] - '0'));
        }
        cout << high - 48 << endl;
    }
    return 0;
}