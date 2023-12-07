#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        cin>>A;
        if(A=="YES" || A== "yES" || A == "yeS" || A=="yes" || A=="YeS" || A=="YEs" || A=="Yes" || A=="yEs"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}