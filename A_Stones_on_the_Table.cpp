#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char A[n + 1];
    cin >> A;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(A[i] == A[i + 1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}