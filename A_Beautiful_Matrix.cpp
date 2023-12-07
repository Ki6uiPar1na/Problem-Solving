#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int row = 5, col = 5;
    int A[6][6];
    for (int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> A[i][j];
        }
    }
    int row, col;
    for( int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(A[i][j] == 1){
                row = i;
                col = j;
            }
        }
        // cout << endl;
    }
    cout << abs(3-row) + abs(3-col) << endl;
    return 0;
    // cout << row << col <<endl;

}