#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int n; cin >> n;
    double minimum_time = 1000;
    for(int i = 0; i < n; i++){
        int x, y, v;
        cin >> x >> y >> v;
        int distance = sqrt(pow((a - x), 2) + (pow((b - y), 2)));
        // cout << distance << endl;
        double total_time = 1.0 * (distance / v);
        minimum_time = min(minimum_time, total_time);
    }
    cout << fixed << setprecision(20);
    cout << 1.0 * minimum_time << endl;
}