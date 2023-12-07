#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int A[a + 1];
        for(int i = 0; i < a; i++){
            cin >> A[i];
        }
        int count = 0;
        for(int i = 0; i < a; i++){
            if(abs((A[i] - A[i + 1]) <= b)){
                count++;
            }
        }
        cout << count << endl;
    }
}