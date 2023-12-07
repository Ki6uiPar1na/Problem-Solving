#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        int A[n + 1];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        int count = 0, final_count = 0;
        for(int i = 0; i < n - 1; i++){
            if(A[i] <= 0 and A[i + 1] > 0){
                count++;
            }
        }
        cout << count << endl;
        
    }
}