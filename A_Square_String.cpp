#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char A[105];
        cin >> A;
        int flag = 0;
        int len = (strlen(A));
        if(strlen(A) % 2 == 1) cout << "NO" << endl;
        else{
            for(int i = 1, j = len/2 + 1; i <= len/2, j <=len; i++,j++ ){
                if(A[i] != A[j]){
                    flag = 1;
                }
            }
            if(flag == 1) cout << "NO" << endl;
            if(flag == 0) cout << "YES" << endl;
        }
    }
}