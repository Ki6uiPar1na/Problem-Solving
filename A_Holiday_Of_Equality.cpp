#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n+1],c=0,d=-1,i=0;
    if(n==1){
        cout<<"0"<<endl;
    }
    else
    {
        for(i=0;i<n;i++){
            cin>>A[i];
        }
        for(i=0;i<n;i++){
            if(A[i]>d){
                d=A[i];
            }
        }
        for(i=0;i<n;i++){
            c+=(d-A[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}