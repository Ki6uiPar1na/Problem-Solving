#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int A[b + 1];
    for(int i = 1; i <= b; i++){
        cin >> A[i];
    }
    sort(A + 1, A + b + 1);
    int r = b, l = 1, lowest = 10005;
    while((r - l) == 4){
        int x = A[r] - A[l];
        lowest = min(lowest, x);
        r--;
        l++;
    }
    cout << lowest << endl;
}