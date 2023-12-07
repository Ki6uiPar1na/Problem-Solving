#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n + 1];
    int minimum_odd = 1e9 + 9;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        sum += A[i];
        if(A[i] % 2 == 1)
            minimum_odd = min(minimum_odd, A[i]);
    }
    if(sum % 2 == 0) cout << sum << endl;
    else{
        cout << sum - minimum_odd << endl;
    }
    return 0;
}