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
    TestCase{
        int n; cin >> n;
        string A;
        cin >> A;
        for(int i = 0; i < n; i++){
            A[i] = tolower(A[i]);
        }
        for(int i = 0; i < A.length(); i++){
            if(A[i] == A[i + 1]){
                A.erase(i + 1 , 2);
                i--;
            }
        }
        string B = "meow";
        if(A.find(B) != A.npos){
            if(A.length() == 4){
                yes;
            }
            if(A.length() != 4){
                no;
            }
        }
        else{
            no;
        }
        // cout << A << endl;
    }

    return 0;
}