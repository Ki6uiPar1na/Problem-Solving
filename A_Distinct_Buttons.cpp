#include <iostream>
#include <cmath>

using namespace std;

void visitSpecialPoints(int n, int specialPoints[][2]) {
    for (int i = 0; i < n; ++i) {
        int xi = specialPoints[i][0];
        int yi = specialPoints[i][1];

        // Move right
        for (int j = 0; j < abs(xi); ++j) {
            cout << "R";
        }

        // Move left
        for (int j = 0; j < abs(xi); ++j) {
            cout << "L";
        }

        // Move up
        for (int j = 0; j < abs(yi); ++j) {
            cout << "U";
        }

        // Move down
        for (int j = 0; j < abs(yi); ++j) {
            cout << "D";
        }

        cout << endl;
    }
}

int main() {
    // Example with 3 special points
    int n = 3;
    int specialPoints[3][2] = {{1, -1}, {0, 0}, {1, -1}};

    // Visit special points
    visitSpecialPoints(n, specialPoints);

    return 0;
}
