#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int A[n+1];
        for(int i=0;i<n;i++){
            std:: cin>>A[i];
        }
        int d=-1,c=0;
        for(int i=0;i<n;i++){
            int mult=A[i]*A[i+1];
            if(mult>d){
                 c=d;
            }
        }
        std::cout<<c<<endl;

    }
}