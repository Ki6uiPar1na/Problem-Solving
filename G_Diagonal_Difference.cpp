#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int A[n][n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> A[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i == j)){
                sum1 += A[i];
            }
            if()
        }
        cout << endl;
    }
    
}