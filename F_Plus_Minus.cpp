#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int a, positive = 0, negetive = 0, zero = 0;
    while(n--){
        cin >> a;
        if(a > 0) positive++;
        if(a < 0) negetive++;
        else zero++;
    }
    cout << fixed << setprecision(6);
    double pos = 0.1 * (positive / n);
    double neg = 0.1 * (negetive / n);
    double zer = 0.1 * (zero / n);
    cout << pos <<endl << neg << endl<< zer << endl;
}