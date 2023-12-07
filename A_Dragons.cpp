#include<bits/stdc++.h>
using namespace std;
int main()
{
    int strenght_of_kitto, number_of_dragons;
    cin >> strenght_of_kitto >> number_of_dragons;
    for(int i = 0; i < number_of_dragons; i++){
        int dragon_strengh, bonus_point;
        cin >> dragon_strengh >> bonus_point;
        if(dragon_strengh < strenght_of_kitto){
            strenght_of_kitto += bonus_point;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}