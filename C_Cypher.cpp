#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int A[n + 1], B[n + 1];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        int roll, down = 0, up = 0;
        string line;
        for(int i = 0; i < n; i++){
            cin >> roll >> line;
            for(int j = 0; j < roll; j++){
                if(line[j] == 'D'){
                    down++;
                }
                if(line[j] == 'U'){
                    up++;
                }
            }
            // B[i] = (roll + (down - up));
            B[i] = (A[i] + (down - up));
            // cout << (A[i] + (down - up)) << endl;
            // cout << down << ' ' << up << endl;
            // for(int i = 0; i < n; i++){
            //     cout << B[i] << ' ';
            // }
            // cout << endl;
            down = 0, up = 0;
        }
        for(int i = 0; i < n; i++){
            if(B[i] > 9){
                cout << B[i] % 10 << ' ';
            }
            else if(B[i] < 0){
                cout << B[i] + 10 << ' ';
            }
            else{
                cout << B[i] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}