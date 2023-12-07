/*
                                  ``````````````
                              ```      হে বস     ```
                           ```    কি খবর ভালো তো    ```
                        ```	              ?                     ```
                            ```					 	  ```
                                ```				 ```
                                        ````````````
*/
#include<bits/stdc++.h>
using namespace std;
int t, count;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define TestCase cin >> t; while(t--)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int A[13];
    for(int i = 1; i <= 12; i++){
        cin >> A[i];
    }
    sort(A + 1, A + 13);
    int sum = 0, count = 0;
    for(int i = 12; i > 0; i--){
        if(n == 0){
            cout << "0" << endl;
            return 0;
        }
        // cout << A[i] << ' ';
        sum += A[i];
        count++;
        if(sum >= n){
            // cout << i << endl;
            cout << count << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}