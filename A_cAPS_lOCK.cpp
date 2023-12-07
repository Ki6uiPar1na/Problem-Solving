/*
Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

either it only contains uppercase letters;
or all letters except for the first one are uppercase.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    cin >>A;
    int len = A.length();
    int flag1 = 0, flag2 = 0;
    if(islower(A[0])){
        flag1 = 1;
    }
    int count = 0, count2 = 0;
    for(int i = 1; i < len; i++){
        if(isupper(A[i])){
            count++;
        }
    }
    for(int i = 0; i < len; i++){
        if(isupper(A[i])){
            count2++;
        }
    }
    if(count2 == len){
        for(int i = 0; i < len; i++){
            A[i] = tolower(A[i]);
            cout << A[i];
        }
        cout << endl;
    }
    else if(flag1 == 1 and count == len - 1){
        for(int i = 0; i < len; i++){
            if(i == 0){
                A[i] = toupper(A[i]);
                cout << A[i];
            }
            else{
                A[i] = towlower(A[i]);
                cout << A[i];
            }
        }
        cout << endl;
    }
    
    else{
        int count = 0;
        for(int i = 0; i < len; i++){
            if(isupper(A[i])){
                count++;
            }
        }
        if(count != len){
            cout << A << endl;
        }
        else if(count == len){
            for(int i = 0; i < len; i++){
                if(i == 0){
                    A[i] = toupper(A[i]);
                    cout << A[i];
                }
                else{
                    A[i] = tolower(A[i]);
                    cout << A[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
    // cout << count << endl;
    // cout << flag1 << endl;
    // cout << flag2 << endl;
    // cout << A;
    //Time: O(n)
    //Space: O(1)
}