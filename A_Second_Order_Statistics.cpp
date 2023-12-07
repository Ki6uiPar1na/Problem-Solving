#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    if(n==1){ cout<<"NO"<<endl; return 0;}
    int A[n+1];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    // int len= strlen(A);
    sort(A,A+n);
    int min;
    for(int i=0;i<n;i++){
         min=A[0];
    }
    for(int i=1;i<n;i++){
        if(min!=A[i]){
            cout<<A[i]<<endl;
            break;
        }
    }
    return 0;
}