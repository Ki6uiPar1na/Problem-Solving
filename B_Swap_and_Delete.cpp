/*
                                  ``````````````
                              ```     	STAY  ```
                           ```    		WITH      ```
                        ```	            PALESTINE    ```
                            ```		   	     		```
                                ```		    	```
                                    ````````````
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cout(n) cout << n << endl;
#define TestCase ll t; cin >> t; while(t--)
 
//Check Prime Numberr: 
bool Prime(int n){
    // Corner case
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool fact(int n){
int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
return factorial;
}
bool Composite(int n){
if(!Prime(n)){
return true;
}
else{
return false;
}
}
//Binary Serching
bool bin_search(int l, int r, int A[], int x){
    while(l <= r){
        int mid = (l + r) / 2;
        if(A[mid] == x){
            return true;
        }
        else{
            if(A[mid] < x){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    }
    return false;
}
ll Digit_sum(ll n){
    ll sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve(){
    string s;
    cin >> s;
    int o, z;
    o = count(s.begin(), s.end(), '1');
    z = count(s.begin(), s.end(), '0'); 
    while(o != 0 and z != 0){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                if(z != 0){
                    z--;
                }
                else{
                    break;
                }
            }
            if(s[i] == '0'){
                if(o != 0){
                    o--;
                }
                else{
                    break;
                }
            }
        }
    }
    
    cout << o + z << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TestCase{
        solve();
    }

    return 0;
}