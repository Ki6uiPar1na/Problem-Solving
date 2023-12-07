#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 0, e = 0;
    while(n != 0){
        if(n >= 2 and n != 0){
            n -= 2;
            m++;
        }
        if(n < 2 and n != 0){
            n--;
            e++;
        }
    }
    // cout << e << m << endl;
    if(e > m) cout << "Ehab" << endl;
    else{
        cout << "Mahmoud" << endl;
    }
    return 0;
}