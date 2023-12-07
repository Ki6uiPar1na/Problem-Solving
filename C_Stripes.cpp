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
        bool flag = false;
        char A[9][9];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> A[i][j];
            }
        }
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(A[i][j] == 'B'){
                    flag = true;
                    break;
                }
            }
        }
        if(flag == true){
            cout << 'B' << endl;
        }

    }

    return 0;
}