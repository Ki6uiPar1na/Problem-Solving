#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n; 
        int A[n + 1];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A,A+n);
        int target = 0;
        for(int i = 0; i < n; i++){
            if(A[i] == A[i + 1] == A[i + 2]){
                target = A[i];
            }
        }
        cout << target << endl;
    }
    return 0;
}
// namespace std;