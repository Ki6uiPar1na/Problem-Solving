#include<bits/stdc++.h>
using namespace std;
bool check_pel(int n[], int len){
    int left = 0, right = len;
    while(left <= right){
        if(n[left] != n[right]){
            return false;
        }
    }
    return true;

}
int main()
{
    int n = 1e9;
    char A[n + 2];
    int t;
    cin >> t;
    while (t--)
    {
        cin >> A;
        cout << A << endl;

    }
    

}