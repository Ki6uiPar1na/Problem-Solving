#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string A;
    int i=0,c=0,t=0,d=0,o=0, sum = 0;
    while(n--)
    {

        cin >> A;
        if(A[0] == 'I') i++;
        if(A[0] == 'C') c++;
        if(A[0] == 'T') t++;
        if(A[0] == 'O') o++;
        if(A[0] == 'D') d++;
    }
    if(i != 0) sum += i*20;
    if(c != 0) sum += c*6;
    if(t != 0) sum += t*4;
    if(o != 0) sum += o*8;
    if(d != 0) sum += d*12;
    cout << sum << endl;
}