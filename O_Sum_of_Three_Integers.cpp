#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b){
    int count=0;
    for(int i=0;i<=a;i++){//2500(n)
        for(int j=0;j<=a;j++){//2500*2500 (n^2)
            for(int k=0;k<=a;k++){//2500*2500*2500 (n^3)
                if(i+j+k==b){
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int d=sum(a,b);
    cout<<d<<endl;
    return 0;
}