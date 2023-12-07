#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    int i,c=0;
    //HQ9+
    getline(cin,A);
    cout<<A<<endl;
    for(i=0;i<A.length();i++){
        if(A[i]=='H' || A[i]=='Q' || A[i]=='9'){
            c++;
        }
    }
    if(c!=0) cout<<"YES"<<endl;
    if(c==0) cout<<"NO"<<endl;
    return 0;
}