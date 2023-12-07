#include<bits/stdc++.h>
using namespace std;
bool prime_number(int n){
    int count=0;
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        return true;
    }
    else{
        return false;
    }
}

bool double_divisior(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(prime_number(i)){
                count++;
            }
        }
    }
    if(count==2){
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(double_divisior(n)){
            count++;
           // cout<<"YES"<<endl;
            //count++;
        }  
    }
     cout<<count<<endl;
    return 0;
}