#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0, count = 0, i = 1;
        if(b == c) cout << "NO" << endl;
        else{
            if(a % b == 0){
                do{
                    sum += i;
                    count++;
                    i++;
                } while(i != c and sum <= a);
            }
            cout << count << ' ' << sum << endl;
        }
    }
}