#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[4];
    int orginal_count = 0;
    while(n--){
        int count = 0;
        for(int i = 0; i < 3; i++){
            cin >> A[i];
            if(A[i] == 1){
                count++;
            }
        }
        if(count >= 2){
            orginal_count++;
        }
    }
    cout << orginal_count << endl;
    return 0;
}