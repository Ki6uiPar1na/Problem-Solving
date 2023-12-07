#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
        int A[t + 1];
        for(int i = 1; i <= t; i++){
            cin >> A[i];
        }
        for(int i = 1 ; i <= t; i++){
            if(A[i] != A[i + 1]){
                count++;
            }
        }
    cout << count  << endl;
    return 0;
}