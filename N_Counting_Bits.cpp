#include<bits/stdc++.h>
using namespace std;
int total_set_bits(int n){
    int count = 0;
    for(int i = 0; i < 10; i++){
        if((n >> i) & 0 == 0){
            count++;
        }
    }
    return count;
}
int main()
{
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += total_set_bits(i);
    }
    cout << ans << endl;
}
}