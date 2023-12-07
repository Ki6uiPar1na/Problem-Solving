#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n + 1];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        int flag, count = 0;
        do{
            for(int i = 0; i < n; i++){
                if(A[i] > A[i + 1]){
                    flag = 1;
                }
                if(flag != 0){
                    swap(A[i], A[i + 1]);
                    count++;
                    flag--;
                }
            }
        }
        while(flag != 0);
        cout << count << endl;
        for(int i = 0; i < n; i++){
            cout << A[i] << ' ';
        }
        cout << endl;
    }
}