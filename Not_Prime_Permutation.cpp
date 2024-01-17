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
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cout(n) cout << n << endl;
#define TestCase int t; cin >> t; while(t--)
 
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
int Digit_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    vector<int> even, odd, final ;
    for(auto &i : v) {
        cin >> i;
        if(i % 2) even.push_back(i);
        else odd.push_back(i);
    }
    // cout << even.size() << ' ' << odd.size() << endl;
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    if(n <= 2) cout << -1 << endl;
    else{
        for(int i = 0; i < max(even.size(), odd.size()); i++){
            final.push_back(even[i]);
            final.push_back(odd[i]);
        }
        for(int i = 0; i < n; i++){
            cout << final[i] << ' ';
        }
        cout << endl;
    }

    // cout << final.size() << endl;

}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TestCase{
        solve();
    }

    return 0;
}