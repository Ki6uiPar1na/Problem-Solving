#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n;
    cin >> n;
    ll A[n + 1];
    ll high = 0, highest = 0, count = 0;
    for(ll i = 1; i <= n; i++){
        cin >> A[i];
    }
    for(ll i = 1; i <= n; i++){
        if(A[i] < A[i + 1]){
            count++;
        }
        else{
            high = max(high, count);
            count = 0;
        }
    }
    cout << count << endl;
    return 0;
    // cout << highest << endl;
}