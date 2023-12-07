#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int s1 = max(a, b);
        int s2 = max(c, d);
        if((min(a,b) > s2) || (min(c,d) > s1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}