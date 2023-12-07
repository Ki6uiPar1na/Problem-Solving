#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int  A[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> A[i];
        A[i] = abs(A[i]);
    }
    // for(int i = 1; i <= n; i++){
    //     cout << A[i] << ' ';
    // }
    cout << endl;
    sort(A + 1, A + n + 1);
    cout << A[1] << endl;
    return 0;
}