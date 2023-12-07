#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a>b) count++;
        }
        cout<<count<<endl;
        count =0;
    }
}