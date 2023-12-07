#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        char A[9][9];
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> A[i][j];
            }
        }
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                if(A[i][j] == '#'){
                    cout << i << ' ' << j << endl;
                }
            }
        }
    }
}