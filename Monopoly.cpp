#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,s=0;
        cin>>a>>b>>c>>d;
        int high=max(a,b);
        high=max(high,c);
        high=max(high,d);
        if(a!=high) s+=a;
        if(b!=high) s+=b;
        if(c!=high) s+=c;
        if(d!=high) s+=d;
        if(s<high) cout<<"YES"<<endl;
        else if(s>=high) cout<<"NO"<<endl;
        // cout<<s<<endl;
        // cout<<high<<endl;
    }
}