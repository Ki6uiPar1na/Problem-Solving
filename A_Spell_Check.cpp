#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string A;
        cin >> n >> A;
        //Timur, miurT, Trumi, mriTu
        if(A == "Timur" or A == "miurT"  or A == "Trumi" or A == "mriTu"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        // cout << ('a' - 'z') << endl;
    }
    return 0;
}