#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for(int i = 1; i != 0 ; i++){
            if(pow(i,2) <= n){
                count++;
            }
            else break;
        }
        cout << count << endl;
        
    }
    return 0;
}