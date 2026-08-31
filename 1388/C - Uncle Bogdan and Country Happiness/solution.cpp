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
 
/*
    gi + wi = si(total population in subtree) 
    gi - wi = hi
    => gi = (si + hi) / 2 ---> must be an integer and 0 <= gi <= si
*/
bool possible_flag;
 
pll dfs(int node, int par, vll& p, vll& h, vector<vll> &adj) {
    if (!possible_flag) return {0, 0};
 
    ll si = p[node];
    ll child_gi = 0;
 
    for (ll child : adj[node]) {
        if (child == par) continue;
 
        pll data = dfs(child, node, p, h, adj);
        si += data.first;
        child_gi += data.second;
    }
 
    // 1. Parity Check: The equation components must be even
    if ((si + h[node]) % 2 != 0) {
        possible_flag = false;
        return {0, 0};
    }
 
    ll gi = (si + h[node]) / 2;
 
    // 2. Bound Check
    if (gi < 0 || gi > si) {
        possible_flag = false;
        return {0, 0};
    }
 
    // 3. gi >= summation(child_gi) 
    if (gi < child_gi) {
        possible_flag = false;
        return {0, 0};
    }
 
    return {si, gi};
}
 
void solve() {
    int n;
    ll m;
    cin >> n >> m;
 
    vll p(n), h(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> h[i];
 
    vector<vll> adj(n);
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    possible_flag = true;
    dfs(0, -1, p, h, adj);
 
    if (possible_flag) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    fast_io;
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}