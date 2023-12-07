
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        string n;
        int c=0;
        cin >> n;
        for(int i = 0; i < n.length(); i++){
            if(n[i]=='7'){
                c++;
            }
        }
        // cout<<"NO"<<endl;
        if(c!=0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}