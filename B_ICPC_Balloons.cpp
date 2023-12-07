#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        string A;
        cin >> a >> A;
        int count = 0, count1 = 0;
        sort(A.begin(), A.end());
        // cout << A << endl;
        for(int i = 0; i < a; i++){
            if(A[i] != A[i + 1]){
                count++;
            }
            else{
                count1++;
            }
        }
        cout << (count * 2) + (count1 * 1) << endl;
    }
    return 0;
}