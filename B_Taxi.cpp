#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,s=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        s+=a;
    }
    // cout<<s<<endl;
    if(s%4==0){
        cout<<s/4<<endl;
    }
    if(s%4!=0){
        cout<<((s/4)+1)<<endl;
    }
    return 0;
}