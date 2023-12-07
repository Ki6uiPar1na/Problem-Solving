#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int c=0;
    while(t--){
    int n;
    cin>>n;
    char A[n+1];
    cin>>A;
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]!='a' or A[i]!='e' or A[i]!='i' or A[i]!='o' or A[i]!='u'){
            count++;
            cout<<count<<' ';
        }
        if(count>=4){
            c++;
            cout<<' '<<c;
        }
        if(A[i]=='a' or A[i]=='e' or A[i]=='i' or A[i]=='o' or A[i]=='u'){
            count=0;
        }
        
    }
    if(c==0){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    }
    return 0;
}