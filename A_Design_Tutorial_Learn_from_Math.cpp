#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << (n / 2) << ' ' << (n / 2) << endl;
    }
    else{
        int half = n / 2;
        for(int i = half; i != 0; i++){
            if(!prime(n / 2)){
                cout << (n / 2) << endl;
                return 0;
            }
            half++;
        }
    }
}