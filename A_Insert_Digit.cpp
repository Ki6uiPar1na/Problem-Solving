#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        char A[a + 1];
        cin >> A;
        int c;
        for( int i = 0; i <= a; i++){
            if(A[i] < b){
                c=i;
            }
        }
        for( int i = 0; i <= a; i++){
            if(A[i] < b){
                cout << b;
            }
            cout << A[i];
        }
        cout << endl;
    }
}