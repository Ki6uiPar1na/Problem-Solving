#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int  n,count=0,count2=0,final=0;
        cin>>n;
        int A[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]==1) count++;
            if(A[i]!=1) count2++; 
        }
        if(count%2==0) final=count/2;
        else if(count%2!=0) final=((count/2)+1);
        // cout<<final<<endl;
        final=final+count2;
        // cout<<count<<" "<<count2<<endl;
        cout<<final<<endl;
    }
    return 0;
    
}