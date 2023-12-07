#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string A;
    cin >> A;
    for( int i = 0; i < A.length(); i++)
    	{
        	A[i] = tolower(A[i]);
        }
    for (int i = 0; i < A.length (); i++){
    		if(A[i] == 'a' ||A[i] == 'e' ||A[i] == 'i' ||A[i] == 'o' ||A[i] == 'u' || A[i] == 'y'){
            	continue;
            }
            else cout <<"." << A[i];
    
        }
    cout << endl;    
    return 0;
}