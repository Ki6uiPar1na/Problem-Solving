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
    TestCase{
        int a;
        cin >> a;
        if(a % 2 == 0){
            cout << a / 2 << ' ' << a / 2 << endl;
        }
        else{
            cout << (a / 2) + 1 << ' ' << a / 2 << endl;
        }
    }
    return 0;
}