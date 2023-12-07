#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int A[n + 1];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int maximum = 0, minimum = 10004, count = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > maximum || A[i] < minimum){
            count++;
            maximum = max(maximum, A[i]);
            minimum = min(minimum, A[i]);
        }
    }
    cout << count - 1 << endl;
    return 0;
}