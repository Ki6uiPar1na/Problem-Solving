#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--)
    {
        int a,b,div;
        cin>>a>>b;
        int high= max(a,b);
        int low= min(a,b);
        div=high-low;
        if(div%2==0){
            cout<<div/2<<endl;
        }
        if(div%2!=0){
            cout<<((div/2)+1)<<endl;
        }
    }
    return 0;
}