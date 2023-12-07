#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll A[5];
    for(int i = 1; i <= 4; i++){
        cin >> A[i];
    }
    ll sum = 0;
    string B;
    cin >> B;
    // cout << B << endl;
    for(int i = 0; i < B.length(); i++){
        if(B[i] == '1'){
            sum += A[1];
        }
        else if(B[i] == '2'){
            sum += A[2];
        }
        else if(B[i] == '3'){
            sum += A[3];
        }
        else if(B[i] == '4'){
            sum += A[4];
        }
    }
    cout << sum << endl;
    return 0;
}