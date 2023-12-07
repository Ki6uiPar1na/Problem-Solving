#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int high=a,low=c;
        high=max(high,b);
        high=max(high,c);
        //cout<<high<<endl;
        low=min(low,a);
        low=min(low,b);
       //cout<<low<<endl;
        if(a!=high && a!=low) cout<<a<<endl;
        if(b!=high && b!=low) cout<<b<<endl;
        if(c!=high && c!=low) cout<<c<<endl;
    }
    return 0;
    
} // namespace std;
