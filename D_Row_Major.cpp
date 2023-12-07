#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%10==1) cout<<"a"<<endl;
        if(n%10==2) cout<<"is"<<endl;
        if(n%10==3) cout<<"for"<<endl;
        if(n%10==4) cout<<"that"<<endl;
        if(n%10==6) cout<<"tomato"<<endl;
    }
    return 0;
}