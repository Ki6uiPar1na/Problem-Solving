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

    int n, m;
    cin >> n >> m;
    char A[m + 1];
    int B[m + 1];
    while(n--){
        cin >> A;
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        for(int i = 0; i < m; i++){
            if(A[i] == 'A'){
                a++;
            }
            if(A[i] == 'B'){
                b++;
            }
            if(A[i] == 'C'){
                c++;
            }
            if(A[i] == 'D'){
                d++;
            }
            if(A[i] == 'E'){
                e++;
            }
            sum += max(a, b, c, d, e) * A[i];
        }
    }

    return 0;
}