#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int A[n + 1];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int l = i; l <= j; l++){
                cout << A[l] << ' ';
            }
            cout << endl;
        }
    }
}