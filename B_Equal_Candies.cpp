/*
                                  ``````````````
                              ```      হে বস     ```
                           ```    কি খবর ভালো তো    ```
                        ```	              ?               ```
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
#define cout(n) cout << n << endl;
#define TestCase cin >> t; while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TestCase{
        int n; cin >> n;
        int A[n + 1];
        int low = 1e7 + 9;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] < low){
                low = A[i];
            }
        }
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += (A[i] - low);
        }
        cout(sum);
    }

    return 0;
}