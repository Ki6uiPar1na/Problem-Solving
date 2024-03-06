#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1, b = 0, sum = 0;
    int n;
    cin >> n;
    n--;
    int fibo_sum = 0;
    while (n--){
        sum = a + b;
        b = a;
        a = sum;
        // cout << sum << ' ' ;
        fibo_sum += sum;
    }
    cout << fibo_sum + 1 << endl;
    return 0;
}
