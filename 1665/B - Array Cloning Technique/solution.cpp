#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
 
        unordered_map<int,int> freq;
        freq.reserve(n*2);
        int f = 0;       // current maximum frequency
 
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            int c = ++freq[x];
            if (c > f) f = c;
        }
 
        // If every element is already the same → 0 ops
        if (f == n) {
            cout << 0 << "
";
            continue;
        }
 
        long long ops = 0;
        // While we haven’t “converted” all n positions to the most frequent value:
        while (f < n) {
            // 1) Clone: duplicate the block of size f → +1 op
            ops++;
 
            // 2) Exchange: turn as many of the remaining slots as possible
            //    (either another f slots, or just what's left)
            int rest = n - f;
            int use  = min(f, rest);
            ops += use;
 
            // 3) Our block doubles (or reaches n)
            f += use;
        }
 
        cout << ops << "
";
    }
 
    return 0;
}