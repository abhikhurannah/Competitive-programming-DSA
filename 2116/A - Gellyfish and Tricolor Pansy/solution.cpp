#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if ((a >= d && c >= d) || (a >= b && c >= b)) {
            cout << "Gellyfish
";
        } else {
            cout << "Flower
";
        }
    }
    return 0;
}