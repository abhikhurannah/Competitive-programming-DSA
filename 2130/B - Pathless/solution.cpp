#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
 
using namespace std;
using pii = pair<int,int>;
 
void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int cnt[3] = {0,0,0};
    for (int &x : a) {
        cin >> x;
        ++cnt[x];
    }
 
    // Build the candidate arrangement 0...0, 2...2, 1...1
    vector<int> b;
    b.reserve(n);
    for (int i = 0; i < cnt[0]; ++i) b.push_back(0);
    for (int i = 0; i < cnt[2]; ++i) b.push_back(2);
    for (int i = 0; i < cnt[1]; ++i) b.push_back(1);
 
    int N = b.size();
    // seen[i][sum] == true iff we can reach index i with cumulative sum 'sum'
    vector<vector<char>> seen(N, vector<char>(s+1, 0));
    queue<pii> q;
 
    // start at position 0 with sum = 0
    seen[0][0] = 1;
    q.push({0, 0});
 
    while (!q.empty()) {
        auto [i, sm] = q.front(); q.pop();
        for (int d : {-1, +1}) {
            int ni = i + d;
            if (ni < 0 || ni >= N) continue;
            int ns = sm + b[ni];
            if (ns <= s && !seen[ni][ns]) {
                seen[ni][ns] = 1;
                q.push({ni, ns});
            }
        }
    }
 
    // if it's possible to reach (N-1, s), Bob fails
    if (seen[N-1][s]) {
        cout << "-1
";
        return;
    }
 
    // otherwise print the rearrangement
    for (int x : b) 
        cout << x << ' ';
    cout << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) 
        solve();
 
    return 0;
}