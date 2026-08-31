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
re rooting dp --> dp[child] = dp[parent] + total_wts - 2*subtree[child]
 
dp(1) =a1*d(1,1) + a2*d(2,1) + a3*d(3,1) + a4*d(4,1) + a5*d(5,1)
 
now rerortinng from node 1 to 2
 
dp(2) 
    = a1*(d1+1)+a2*(d2-1)+a3*(d3+1)+a4*(d4-1)+a5*(d5-1)
    = (a1*d1+a2*d2+a3*d3+a4*d4+a5*d5)  + (a1+a3) - (a2+a4+a5)
    = dp(1) + (total - sub) - sub
    = dp(1) + total - 2 * sub ---> final derived equation
 
*/ 
 
void solve() {
    ll n;
    cin >> n;
    vll a(n+1);
    ll total_wts = 0;
    repl(i, 1, n){
        cin >> a[i];
        total_wts += a[i];
    }
    vector<vll> adj(n+1);
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vll dp(n+1, 0), subtree(n+1, 0);
    ll maxcost = 0;
 
    // precalculate base dp for root node (1);
    auto dfs1 = [&](auto &&self, int node, int par, int depth) -> void {
        subtree[node] = a[node];
        dp[1] += (a[node] * depth * 1LL);
        for(auto it : adj[node]){
            if(it == par) continue;
            self(self, it, node, depth+1);
            subtree[node] += subtree[it];
        }
    };
    dfs1(dfs1, 1, 0, 0);
 
    // re-rooting dp for other nodes
    auto dfs2 = [&](auto &&self, int node, int par) -> void {
        maxcost = max(maxcost , dp[node]);
        for(auto it : adj[node]){
            if(it == par) continue;
            dp[it] = dp[node] + total_wts - 2 * subtree[it];
            self(self, it, node);
        }
    };
    dfs2(dfs2, 1, 0);
 
    cout << maxcost << endl;
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