#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,count=0;
        cin>>a>>b>>c;
        cin>>x>>y;
        while(c--){
            int x1,y1;
            cin>>x1>>y1;
            int minus1=max(x,x1)-min(x,x1);
            int minus2=max(y,y1)-min(y,y1);
            if(minus1==minus2) count++;
        }
        if(count==0) cout<<"YES"<<endl;
        if(count!=0) cout<<"NO"<<endl;
    }
    return 0;
}