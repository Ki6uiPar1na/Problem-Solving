#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        char A[a + 1][b + 1];
        for(int row = 1; row <= a; row++){
            for(int col = 1; col <= b; col++){
                cin >> A[row][col];
            }
        }
        // for(int row = 1; row <= a; row++){
        //     for(int col = 1; col <= b; col++){
        //         cout << A[row][col];
        //     }
        //     cout << endl;
        // }
        int count = 0;
        for(int row = 1; row <= a; row++){
            for(int col = 1; col <= b; col++){
                if(A[row][col] == 'v'){
                    count++;
                    row++;
                }
                if(A[row][col] == 'i'){
                    count++;
                    row++;
                }
                if(A[row][col] == 'k'){
                    count++;
                    row++;
                }
                if(A[row][col] == 'a'){
                    count++;
                    row++;
                }
            }
        }
        if(count == 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}