#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        char A[4];
        cin >> A;
        if(A [0] =='+' || A[1] == '+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout << count << endl;
    cout << endl;
}