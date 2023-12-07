#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while( t--){
        int n;
        cin >> n;
        int count, sum = 0;
        for(int i = 1; i <= n; i++){
            int a, b;
            cin >> a >> b;
            if(a <= 10 ){
                if((a + b) > sum){
                    sum = a + b;
                    count = i;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}