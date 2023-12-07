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
char A[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> A;
    // cout << A << endl;
    int len = strlen(A);
    int left = 0, right = len;
    int count = 0;
    while(left < right){
        if(A[left] != A[right]){
            right--;
            count = 0;
        }
        if(A[left] == A[right]){
            if(count < right)
                count = right;
            left++, right--;
        }
    }
    char B[len + 1];
    if(count == 0){
        reverse(A, A+strlen(A));
        left = 0, right = len;
        if(A[left] != A[right]){
            right--;
            count = 0;
        }
        if(A[left] == A[right]){
            if(count < right)
                count = right;
            left++, right--;
        }
    }
    cout << count + 1 << endl;
    return 0;
}