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
        int left = 1, right = n;
        // for(int i = 1; i < n; i++){
            while(left < right){
                cout << A[left] << ' ' << A[right] << ' ';
                left++, right--;
            // }
        }
        if(n % 2 != 0){
            cout << A[(n / 2) + 1];
        }
        cout << endl;
    }
}