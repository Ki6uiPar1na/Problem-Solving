#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        char A[n + 1], B[n + 1];
        cin >> A;
        int count = 0, final_count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(A[i] != A[j]){
                    count++;
                }
                if(count != 0 and A[i] == A[j]){
                    final_count++;
                }
            }
            if(final_count != 0){
                break;
            }
        }
        if(count != 0 and final_count != 0){
            no;
        }
        else{
            yes;
        }
    }
}