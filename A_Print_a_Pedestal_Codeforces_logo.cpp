#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int N;
        cin >> N;
        if(N == 7){
            cout << 2 << ' ' << 4 << ' ' << 1 << endl;
        }
        else
            cout << (N / 2) - 1 << ' ' << N / 2 << ' ' << N - (((N / 2) -1) + (N / 2)) << endl;
    }
    return 0;
}