#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int A[n + 1];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int a = 0, b = -1, count = 0;
    for(int i = 0; i < n; i++){
        if(A[i] >= b){
            b = A[i];
            count++;
        }
        else{
            if(count >= a){
                a = count;
                b = -1;
                count = 1; 
            }
        }
    }
    if(count > a){
        cout << count << endl;
    }
    else {
        cout << a << endl;
    }
    return 0;
}