#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        char A[n + 1], B[n + 1];
        cin >> A >> B;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(A[i] == 'R' and (B[i] == 'G' or B[i] == 'B')){
                count++;
            }
            if(B[i] == 'R' and (A[i] == 'G' or A[i] == 'B')){
                count++;
            }

        // cout << A << endl << B << endl;
    }
    if(count == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
    return 0;
}