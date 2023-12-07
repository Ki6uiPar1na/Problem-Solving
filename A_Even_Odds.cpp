#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int div;    // if (a % 2 != 0)
    //     div++;
    if(a % 2 == 0){
        div = a / 2;
    }
    if(a % 2 != 0 ){
        div = a / 2;
        div++;
    }
    // cout << div << ' ';
    int oddd = 0,evenn=0;

    // even number , less then a/2
    if (b <= div){
        for (int i = 1; i <= 10; i++){
            if (i % 2 != 0){
                oddd++;
                if (oddd == b){
                    cout << i << endl;
                }
            }
        }
    }
    if(b > div){
        for(int i = 1; i <= 10; i++){
            if(i % 2 == 0 ){
                evenn++;
                if(evenn == (a - div)){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}