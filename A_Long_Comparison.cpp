#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, p1, x2, p2;
    int t;
    cin>>t;
    while(t--){
        cin >> x1 >> p1 >> x2 >> p2;
        long long int sum1= x1* (pow(10,p1));
        // cout << x1 * pow(10,p1)<<endl;
        long long int s1 = x1 * pow(10,p1);
        // long long int sum2= x2* (pow(10,p2));
        // cout<< x2 * pow(10,p2) << endl;
         int s= x2 * pow(10,p2);
        cout << s << endl<< s1 << endl;
}
}