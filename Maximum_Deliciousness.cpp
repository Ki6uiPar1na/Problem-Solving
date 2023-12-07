#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int A[a + 1];
        for(int i = 0; i < a; i++){
            cin >> A[i];
        }
        sort(A, A + a);
        int sum = 0;
        for(int i = a - c; i >= 0; i -= b){
            sum += A[i];
        }
        cout << sum << endl;
    }
    return 0;
}