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
        int A[n+1],B[n+1];
        for(int i=0;i<n;i++) cin>>A[i];

        for(int i=0;i<n;i++) cout<<A[i]<<endl;
        
        for(int i=0;i<n;i++) cin>>B[i];
        for(int i=0;i<n;i++) cout<<B[i]<<endl;
    }
}
