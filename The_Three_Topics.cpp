#include<bits/stdc++.h>
using namespace std;
int main()
{
string A;
int i=0,c=0,o=0,d=0,t=0;
// I=20,C=6,O=8,D=12,T=4;
getline(cin,A);
for(int i=0;i<A.size();i++){
    if(A[i]=='I'){
        i++;
        break;
    }
    if(A[i]=='C'){
        c++;
        break;
    }
    if(A[i]=='O'){
        o++;
        break;
    }
    if(A[i]=='D'){
        d++;
        break;
    }
    if(A[i]=='T'){
        t++;
        break;
    }
}
cout<<i+c+o+d+t<<endl;
cout<<A<<endl;
}