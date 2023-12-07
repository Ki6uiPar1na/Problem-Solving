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
        if(n > 17){
            cout << "-1" << endl;
        }
        if(n < 10){
            cout << n << endl;
        }
        if(n > 10 and n < 18){
            cout << n - 9 << 9 << endl;
        }
        if(n == 10){
            cout << 19 << endl;
        }
    }

    return 0;
}