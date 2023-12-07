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
        int w, h, n;
        int sum = 0;
        cin >> w >> h >> n;
        while((w % 2) != 0 and (h % 2 != 0)){
            if(w % 2 == 0){
                sum += ((w / 2) * h);
                w = w - (w / 2);
            }
            if(h % 2 == 0){
                sum += ((h / 2) * w);
                h = h - (h / 2);
            }
        }
        if((sum + 1) >= n){
            yes;
        }
        if((sum + 1) < n){
            no;
        }
    }

    return 0;
}