/*
                                  ``````````````
                              ```      আরেহ বস     ```
                           ```    	   ভালো তোহ    ```
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

    char A[205];
    cin >> A;
    int len = strlen(A);
    int count = 0;
    for(int i = 0; i < len;){
        if(A[i] == 'W' and A[i + 1] == 'U' and A[i + 2] == 'B'){
            i += 3;
            if(count == 1){
                cout << ' ';
            }
            count = 0;
            continue;
        }
        else{
            cout << A[i];
            i++;
            count = 1;
        }
        // if(A[i] == (len - 1)){
        //     cout << endl;
        // }
    }

    return 0;
}