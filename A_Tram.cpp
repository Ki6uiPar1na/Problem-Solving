#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a=0,b=0,s=0,ma=0; cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0) s=b-a;
        // cout<<s<<endl;
        if(a!=0)s=(s-a)+b;
        // cout<<s<<endl;
        ma=max(ma,s);
       cout<<ma<<endl;
    }
     cout<<ma<<endl;
}