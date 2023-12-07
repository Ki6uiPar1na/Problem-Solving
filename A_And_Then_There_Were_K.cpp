#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        int operation = n, count = 1;
        for(int i = n - 1; i > 0; i--){
            count++;
            operation = operation & i;
            if((operation == 0)){
                break;
            }
            else{
                continue;
            }
        }
        cout << count << endl;
    }
}