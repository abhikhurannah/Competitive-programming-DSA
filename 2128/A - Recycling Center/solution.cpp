#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
 
        long long mult = 1;
        int cost = 0;
 
        while (!a.empty()) {
            long long threshold = c / mult;
            auto it = upper_bound(a.begin(), a.end(), threshold);
            if (it != a.begin()) {
                --it;
                a.erase(it);
            } else {
                a.erase(a.begin());
                cost++;
            }
            mult <<= 1;
        }
 
        cout << cost << "
";
    }
    return 0;
}