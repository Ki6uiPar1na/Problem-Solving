#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        char A[4][4];
        int plusRow = 0, plusCol = 0, Xrow = 0, Xcol = 0, Orow = 0, Ocol = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> A[i][j];
                if(A[i][j] == '+'){
                    plusRow+=i;
                    plusCol+=j;

                }
                else if(A[i][j] == 'X'){
                    Xrow += i;
                    Xcol += j;
                }
                else{
                    Orow += i;
                    Ocol += j;
                }
            }
        }
        if((plusRow + plusCol) == 9 or (plusCol + plusRow) == 12 or (plusCol + plusRow) == 15){
            cout << "+" << endl;
            return 0;
        }
        if((Xcol + Xrow ) == 9 or (Xcol + Xrow) == 12 or (Xcol + Xrow) == 15){
            cout << "X" <<  endl;
            return 0;
        }
        if((Ocol + Orow) == 9 or (Ocol + Orow) == 12 or (Ocol + Orow) == 15){
            cout << "O" << endl;
            return 0;
        }
        else{
            cout << "DRAW" << endl;
        }
        
    }
}