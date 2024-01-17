    #include <iostream>
    using namespace std;

    int main() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            if (n % 3 == 0 or n % 4 == 0 or n == 7 or n == 6 or (n - 7) % 3 == 0 or (n - 7) % 4 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        return 0;
    }
