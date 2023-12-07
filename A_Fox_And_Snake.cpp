#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k = 0;
    cin >> a >> b;
    int sum = a * b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            // cout << "#";
            if(i % 2 != 0){
                cout << "#";
            }
            if(i % 2 == 0){
                k++;
                if(i % 2 == 0 and j == b and k % 2 != 0){
                    cout << '#';
                }
                else if(i % 2 == 0 and j == 1 and k % 2 == 0){
                    cout << '#';
                }
                else{
                    cout << '.';
                }
            }
        }
        cout << endl;
    }
    return 0;
}