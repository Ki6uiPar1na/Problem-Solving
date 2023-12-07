#include<bits/stdc++.h>
using namespace std;
long long int divisor_count(long long int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;

}
int main()
{
    int n;
    cin >> n;
    while(n--){
        long long int a;
        cin >> a;
        int m = divisor_count(a);
        if(m == 3){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        cout << (a << 1) <<endl;
    }
    return 0;
}
