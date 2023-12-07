#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    char c; long long int d, sum = 0, count = 0;
    for(int i = 0; i < a; i++){
        cin >> c >> d;
        if(c == '+'){
            b += d;
        }
        if(c == '-'){
            if(b < d){
                count++;
            }
            else{
                b -= d;
            }
        }
    }
    // cout << count << ' ' << b  << ' ' << d << endl;
    cout << b << ' ' << count << endl;
    return 0;
}