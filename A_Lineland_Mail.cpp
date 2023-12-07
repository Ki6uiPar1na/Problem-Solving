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

    int n;
    cin >> n;
    int A[n + 1], B[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B + 1, B + n + 1);
    int low = B[1], high = B[n];
    cout << low << high << endl;

    return 0;
}