#include<bits./stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;
    cin>>n;
    int A[n+1];
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=n;i++)
    {
        if(A[i]%2==0) c++;
        if(A[i]%2!=0) d++;
        if(c==2 || d==2) break;
    }
    if(d==2){
        for(int i=1;i<=n;i++){
            if(A[i]%2==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    if(c==2){
        for(int i=1;i<=n;i++){
            if(A[i]%2!=0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
