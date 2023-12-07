#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    char A[a + 1][b + 1];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(A[i][j] =='W' || A[i][j] == 'B' or A[i][j] == 'G'){
                count++;
            }
        }
    }
    if(count == (a * b)){
        cout << "#Black&White" << endl;
    }
    else cout << "#Color" << endl;
    return 0;
}