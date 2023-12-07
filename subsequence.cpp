#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  char a[n + 1];
  cin >> a;
  
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // a[i..j] is a subarray of a
      for (int k = i; k <= j; k++) {
        cout << a[k] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}