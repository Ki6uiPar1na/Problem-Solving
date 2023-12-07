#include<bits/stdc++.h>
using namespace std;
// int count;

int main()
{
    int n;
    cin >> n; 
    int A[n + 1];
    for( int i = 0; i < n; i++){
        cin >> A[i];
    }
    int count = 0;
    int b = 1, a = -1,c = 1;
    for( int i = 0; i < n; i++){
        if(A[i] >= b){
            count++;
            cout << count << ' ';
        }
        else{
            if(count >= a){
                a = count;
                count = 0;
                c=1;
            }
        }
    }
    if(count > a){
        cout << a << endl;
    }
    else {
        cout << count <<endl;
    }
    return 0;
}