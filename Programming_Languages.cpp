#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if((a==a1 or a==b1) and (b==a1 or b==b1)){
            cout<<"1"<<endl;
        }
        else if((a==a2 or a==b2) and (b==a2 or b==b2)){
            cout<<"2"<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
    }
    return 0;
}