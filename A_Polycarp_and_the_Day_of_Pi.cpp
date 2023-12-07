#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        char A[31];
        cin >> A;
        // cout << A << endl;
        char B[] = {"3141592653589793238462643383279502884197"};
        int count = 0;
        for(int i = 0; i < strlen(A); i++){
            if(A[i] == B[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
        // char B[] = {"3141592653589793238462643383279502884197"};
        // cout << B << endl;
    }
    return 0;
}