#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    int A[]={ 1,4,4,6,2,6,2,9,10,5};
    for(int i=0;A[i]!='\0';i++){
        c++;
        cout<<i<<endl;
    }
    sort(A,A+c);
    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
}