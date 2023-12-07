#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a, b;
    cin >> n >> m >> a >> b;
    double sum1 = ((n * b) / m);
    long long int sum3 = round(sum1);
    if((sum3 - sum1) < 0){
        sum3++;
    }
    long long int sum2 = n * a;
    // cout << sum1 << ' ' << sum2 << ' ' << sum3 << endl;
    cout << min(sum2, sum3) << endl;
    return 0;
}