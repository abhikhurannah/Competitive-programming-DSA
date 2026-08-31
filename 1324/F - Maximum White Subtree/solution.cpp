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
 
ll n;
vll a; 
vector<vll> adj;
vll dp;  // dp[u] stores the max score in u's static subtree
vll ans; // ans[u] stores the absolute global max score for node u
 
 
// Step 1: Bottom-up pass to find optimal downward subtrees
void dfs1(int node, int par) {
    dp[node] = a[node];
    for (auto child : adj[node]) {
        if (child == par) continue;
        dfs1(child, node);
        if (dp[child] > 0) dp[node] += dp[child];
    }
}
 
// Step 2: Rerooting dp
void dfs2(int node, int par, ll par_contrib) {
    ans[node] = dp[node] + par_contrib;
 
    for (auto child : adj[node]) {
        if (child == par) continue;
        ll dynamic_par_score = ans[node];
        if (dp[child] > 0) dynamic_par_score -= dp[child];
        ll next_par_contrib = max(0LL, dynamic_par_score);
 
        dfs2(child, node, next_par_contrib);
    }
}
 
void solve() {
    cin >> n;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        int color;
        cin >> color;
        // Map: White (1) -> +1, Black (0) -> -1
        a[i] = (color == 1) ? 1 : -1;
    }
    adj.assign(n + 1, vll());
    dp.assign(n + 1, 0);
    ans.assign(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
 
    dfs1(1, 0);
    dfs2(1, 0, 0);
    
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
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