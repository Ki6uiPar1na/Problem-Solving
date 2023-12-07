#include<bits/stdc++.h>
using namespace std;
bool distinct(int n){
    int d4=n%10;
    n=n/10;
    int d3=n%10;
    n=n/10;
    int d2=n%10;
    n=n/10;
    int d1=n;
    if(d1!=d2 and d1!=d3 and d1!=d4 and d2!=d3 and d2!=d4 and d3!=d4){
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
    while(n!=0){
        n++;
        if(distinct(n)){
            cout<<n<<endl;
            return 0;
        }
    }
    return 0;
}