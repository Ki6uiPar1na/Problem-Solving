
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        char A[n + 1];
        cin >> A;
        for(int i = 0 ;i<n;++i){
            if(A[i] == 'A'){
                cout << 'T';
            }
            else if(A[i] == 'T') cout << 'A';
            else if(A[i] == 'C') cout << 'G';
            else cout<<'C';
        }
        cout << endl;

    }
    return 0;
}