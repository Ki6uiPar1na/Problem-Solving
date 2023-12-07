#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B;
    int i,j;
    getline(cin,A);
    getline(cin,B);
    for(i=0,j=0;i<A.size(),j<B.size();i++,j++){
        if(A[i]=='1' && B[j]=='1'){
            cout<<"0";
        }
        else if(A[i]=='0' && B[j]=='0' ){
            cout<<"0";
        }
        else cout<<"1";
    }
    cout<<endl;
    return 0;
}