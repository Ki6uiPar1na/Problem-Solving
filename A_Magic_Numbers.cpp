#include<bits/stdc++.h>
using namespace std;
int t, count;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define TestCase cin >> t; while(t--)
bool khuj_laga(string A, string B){
    if(A.find(B) != A.npos){
        return true;
    }
    else{
        return false;
    }
}

int position_khuj(string A, string B){
    if(khuj_laga(A, B)){
        return A.find(B);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string A, B;
    cin >> A;
    for(int i = 0; i < A.length(); i++){
        A[i] = tolower(A[i]);
    }
    cout << A << endl;
    if(khuj_laga(A, "evan")){
        cout << "Agrito Evan Vai" << endl;
    }
    if(khuj_laga(A, "erafat")){
        cout << "Agrito Arafat vai" << endl;
    }
    return 0;
}