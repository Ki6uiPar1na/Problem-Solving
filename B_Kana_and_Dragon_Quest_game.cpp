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
#define TestCase cin >> t; while(t--)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    TestCase{
        int x, n, m;
        cin >> x >> n >> m;
        // if(x <= 0){
        //     yes;
        // }
        bool flag = false;
            for(int i = 0; i < m; i++){
                x -= 10;
            }
            if(x <= 0){
                flag = true;
            }
            for(int i = 0; i < n; i++){
                x = floor(x / 2) + 10;
            }
            if(x <= 0){
                flag = true;
            }
        // cout << x << endl;
        if(flag == true){
            // cout << "YES" << endl;
            yes;
        }
        else{
            no;
        }
    }
    return 0;
}