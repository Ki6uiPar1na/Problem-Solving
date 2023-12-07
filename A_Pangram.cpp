// C++ program of the above approach
#include <bits/stdc++.h>
using namespace std;

// Program to count the number of
// unique characters in a string
int cntDistinct(string str)
{
    // Set to store unique characters
    // in the given string
    unordered_set<char> s;

    // Loop to traverse the string
    for (int i = 0; i < str.size(); i++)
    {

        // Insert current character
        // into the set
        s.insert(str[i]);
    }

    // Return Answer
    return s.size();
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        string A;
        cin >> A;
        for (int i = 0; i < n; i++)
        {
            A[i] = tolower(A[i]);
        }
        int n = cntDistinct(A);
        if (n == 26)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
