#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int gcdd = 0;
        for(int i = 1; i <= n ; i++){
            if(__gcd(i, i+1) > gcdd){
                gcdd = __gcd(i, i + 1);
            }
        }
        cout << gcdd << endl;
    }
}