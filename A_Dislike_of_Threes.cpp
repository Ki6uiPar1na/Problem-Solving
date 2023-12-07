#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //cout<<n%10<<endl;
    while(n--)
    {
        int N,i;
        cin>>N;
        for(i=1;i<N;i++){
            L:
            if(N%3==0 || N%10 ==3 ){
                i-- ; continue;
            }
            else{
                cout<<i<<endl;
                break;
            }
        }
    }
}