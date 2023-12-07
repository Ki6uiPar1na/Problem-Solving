#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        char A[20];
        cin >> A;
        int sum = 0;
        for(int i = 0; i < strlen(A); i++){
            if(A[i] != '+'){
                sum += (A[i] - '0');
            }
        }
        cout << sum << endl;
    }
}