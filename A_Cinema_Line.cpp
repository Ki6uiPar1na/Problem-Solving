#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(auto &i : v) cin >> i;
    for(int i = 0; i < n; i++){
        if(v[i] == 25){
            mp[v[i]]++;
        }
        else if(v[i] == 50){
            if(mp[25] == 0){
                cout << "NO" << endl;
                return 0;
            }
            mp[25]--;
            mp[50]++;
        }
        else if(v[i] == 100){
            if(mp[25] == 0){
                cout << "NO" << endl;
                return 0;
            }
            if(mp[50] >= 1 and mp[25] >= 1){
                mp[50]--, mp[25]--;
                mp[100]++;
            }
            else if(mp[25] >= 3){
                mp[25] -= 3;
                mp[100]++;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}