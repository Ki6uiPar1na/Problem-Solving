#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    char A[n + 1], B[n + 1];
    cin >> A >> B;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(abs((A[i] - '0') - (B[i] - '0')) > 5){
            int low = min((A[i] - '0'), B[i] - '0');
            int high = max((A[i] - '0'), B[i] - '0');
            low += 10;
            sum += abs(high - low);
            // cout << sum << endl;
        }
        else{
            sum += abs(((A[i] - '0') - (B[i] - '0')));
        }
    }
    cout << sum << endl;
    return 0;
}