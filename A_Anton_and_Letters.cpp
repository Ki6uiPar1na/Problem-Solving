#include<bits/stdc++.h>
using namespace std;

int countdistinct_element(string A){
    unordered_set <char> s;
    for(int i =0; i< A.size();i++){
        s.insert(A[i]);
    }
    return s.size();
}

int main()
{
    string A;
    cin >> A;
    getline(cin, A);
    if(A.size() <= 2){
        cout << "0" << endl;
    }
    else if(A.size() == 3){
        cout << "1" << endl;
    }
    else{
    int len = countdistinct_element(A);
    // if(len % 2 !=0) 
    // cout << len - 2 <<endl;
    // if(len % 2 == 0)
    cout << len  << endl;
    }
    return 0;
}