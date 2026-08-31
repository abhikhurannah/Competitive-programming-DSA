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
#include <unordered_map>
#include <unordered_set>
#include <limits>
#include <random>
#include <iomanip>
#include <numeric>
#include <cassert>
#include <bitset>
#include <tuple>
#include <deque>
using namespace std;
 
// Type aliases
using ll    = long long;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vi    = vector<int>;
using vll   = vector<ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;
using vvi   = vector<vi>;
 
// Constants
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
const ll  LLINF  = 1e18;
 
 
// Macros
#define all(x)            (x).begin(), (x).end()
#define len(x)            static_cast<int>((x).size())
#define F                 first
#define S                 second
#define pb                push_back
#define mpr               make_pair
 
// Loop macros
#define rep(i, a, b)      for (int i = (a); i <= (b); ++i)
#define per(i, a, b)      for (int i = (b); i >= (a); --i)
#define repl(i, a, b)     for (ll i = (a); i <= (b); ++i)
#define perl(i, a, b)     for (ll i = (b); i >= (a); --i)
 
// Fast Exponentiation
ll mod_exp(ll base, ll exp, ll mod=MOD) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
// GCD and LCM
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
 
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
 
// sum of all elements in a vector
template <typename T>
T sum(const vector<T>& v) {
    return accumulate(v.begin(), v.end(), T(0));
}
// sum of all elements in a 2d vector
template <typename T>
T sum(const vector<vector<T>>& v) {
    T total = 0;
    for (const auto& row : v) {
        total += accumulate(row.begin(), row.end(), T(0));
    }
    return total;
}
// Print a vector
template <typename T>
void print(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}
 
// Print a 2D vector
template <typename T>
void print(const vector<vector<T>>& v) {
    for (const auto& row : v) {
        print(row);
    }
}
 
// Print a pair
template <typename T1, typename T2>
void print(const pair<T1, T2>& p) {
    cout << "(" << p.first << ", " << p.second << ")" << endl;
}
 
// Fast IO
#define fast_io           ios::sync_with_stdio(false); cin.tie(nullptr)
 
 
struct Edge {
    int u, v;
    long long w;
    
    bool operator<(const Edge& other) const {
        return w < other.w;
    }
};
 
struct DSU {
    vector<int> parent;
    vector<int> special_count;
 
    DSU(int n, const vector<bool>& is_special) {
        parent.resize(n + 1);
        special_count.resize(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
            if (is_special[i]) {
                special_count[i] = 1;
            }
        }
    }
 
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]); 
    }
 
    bool unite(int i, int j, int total_k) {
        int root_i = find(i);
        int root_j = find(j);
 
        if (root_i != root_j) {
            parent[root_j] = root_i;
            special_count[root_i] += special_count[root_j];
 
            if (special_count[root_i] == total_k) {
                return true;
            }
        }
        return false;
    }
};
 
void solve() {
    int n, m, k;
    if (!(cin >> n >> m >> k)) return;
 
    vector<bool> is_special(n + 1, false);
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        is_special[x] = true;
    }
 
    vector<Edge> edges(m);
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
 
    sort(edges.begin(), edges.end());
 
    DSU dsu(n, is_special);
 
    long long ans = 0;
 
    for (const auto& edge : edges) {
        if (dsu.unite(edge.u, edge.v, k)) {
            ans = edge.w;
            break; 
        }
    }
 
    // Step 4: Print the answer k times
    for (int i = 0; i < k; ++i) {
        cout << ans << (i == k - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    fast_io;
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}