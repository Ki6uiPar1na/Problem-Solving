#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a > b) cout << "New" << endl;
    else if(b > a){
        cout << "Old" << endl;
    }
    else{
        cout << "Same" << endl;
    }
    return 0;
}