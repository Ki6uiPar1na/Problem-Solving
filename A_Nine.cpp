#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b;
    s=a+b;
    cout<<s<<endl;
    if((a==1 || b==1)&&(a==2 || b==2)&& (a==3 || b==3) ){
        if(s+1==6||s+2==6||s+3==6){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        //cout<<"Yes"<<endl;
    }
    else if((a==4  || b==4)&&(a==5 || b==5)&& (a==6 || b==6) ){
        if(s+4==15||s+5==15||s+6==15){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        //cout<<"Yes"<<endl;
    }
    else if((a==7 || b==7)&&(a==8 || b==8)&& (a==9 || b==9)  ){
        if(s+7==24||s+8==24||s+9==24){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        // cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}