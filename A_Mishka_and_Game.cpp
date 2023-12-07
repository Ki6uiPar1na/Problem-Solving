#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,a,b,c=0,d=0;
    cin>>N;
    while (N--)

    {
        cin>>a>>b;
        if(a>b){
            c++;
        }
        if(b>a){
            d++;
        }
        if(a==b){
            continue;
        }
        /* code */
    }
    if(c>d){
        cout<<"Mishka"<<endl;
    }
    if(d>c){
        cout<<"Chris"<<endl;
    }
    if(d==c){
        cout<<"Friendship is magic!^^"<<endl;
    }
    c=0,d=0;
    return 0;
    
}