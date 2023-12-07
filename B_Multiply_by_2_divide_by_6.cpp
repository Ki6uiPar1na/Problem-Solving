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
        ll n;
        cin >> n;
        int final = 0;
        int flag = 0, count = 0;
        while(n != 1){
            if(n % 6 == 0){
                n /= 6;
                final++;
            }
            if(count == 2){
                flag = 1;
            }
            if(flag == 1){
                cout << "-1" << endl;
                break;
            }
            if((n % 6 != 0) and flag == 0){
                n *= 2;
                final++;
                count++;
            }
        }
        cout << final << endl;
    }
    return 0;
}