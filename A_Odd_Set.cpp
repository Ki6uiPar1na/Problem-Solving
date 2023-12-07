#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n * 2];
        int count = 0, count1 = 0;
        for(int i = 0; i < n * 2; i++){
            cin >> A[i];
            if(A[i] % 2 == 0) count++;
            if(A[i] % 2 != 0) count1++;
        }
        if(count == count1) cout << "Yes" << endl;
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}