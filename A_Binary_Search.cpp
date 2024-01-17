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
ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
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

bool bin_search(vector<int> v, int x){
    sort(v.begin(), v.end());
    int r = v.size(), l = 1;
    cout << v.size() << endl;
    // int mid = (r + l) / 2;
    while(r >= l){
        int mid = (r + l) / 2;
        if(v[mid] == x){
            return true;
        }
        else{
            if(v[mid] > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        mid = (r + l) / 2;
    }
    return false;
}
void solve(){
    int n, q; cin >> n >> q;
    vector<int> v(n), vq(q);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(auto &i : vq) cin >> i;
    for(int i = 0; i < q; i++){
        bin_search(v, vq[i]);
    }
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}