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

    int n; cin >> n; 
    int A[n + 1];
    int low, high, low_index, high_index;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    low = 105;
    high = -1;
    for(int i = 0; i < n; i++){
        if(A[i] < low){
            low = A[i];
            low_index = i;
        }
        if(A[i] > high){
            high = A[i];
            high_index = i;
        }
    }
    // cout << high << low << endl;
    cout << low_index - n << endl;
    cout << high_index - 1 << endl;



    return 0;
}