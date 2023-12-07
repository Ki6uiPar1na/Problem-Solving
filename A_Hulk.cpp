#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    int n,i,c=0;
    /*
    if(i==n) cout<<"it"<<endl;
    else cout<<"that"<<endl;
    */
   cin>>n;
   if(n==1) cout<<"I hate it"<<endl;
   else{
   for(i=1;i<=n;i++){
        if(i%2!=0){
            cout<<"I hate ";
            if(i==n) cout<<"it"<<" ";
            if(i!=n)cout<<"that"<<" ";
        }
        if(i%2==0){
            cout<<"I love ";
            if(i==n) cout<<"it"<<" ";
            if(i!=n)cout<<"that"<<" ";
        }

        }
   }
    return 0;
}