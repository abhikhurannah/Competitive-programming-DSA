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
 
void solve() {
    ll n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vll> adj(n + 1);
    while(m--) {
        ll u,v;
        cin >> u >> v;
        adj[u].pb(v);
    }
    // step 1 : khan alogrithm to detect cycle
    vector<ll> in_degree(n + 1, 0);
    for(ll i = 1; i <= n; i++) {
        for(auto it : adj[i]) {
            in_degree[it]++;
        }
    }
    queue<ll> q;
    for(ll i = 1; i <= n; i++) {
        if(in_degree[i] == 0) {
            q.push(i);
        }
    }
    vector<ll> topo_order;
    while(!q.empty()) {
        ll node = q.front();
        q.pop();
        topo_order.pb(node);
        for(auto it : adj[node]) {
            in_degree[it]--;
            if(in_degree[it] == 0) {
                q.push(it);
            }
        }
    }
    if(topo_order.size() != n) {
        cout << -1 << "
";
        return;
    }
 
    // step 2 : use dp[u][c] to store the maximum count of character c in any path start at node u
    vector<vll> dp(n + 1, vll(26, 0));
    ll ans = 0;
 
    for(int i = n -1 ;i >=0 ; i--){
        int u = topo_order[i];
        int char_idx = s[u - 1] - 'a';
 
        for(auto v : adj[u]) {
            for(int c = 0; c < 26; c++) {
                dp[u][c] = max(dp[u][c], dp[v][c]);
            }
        }
        dp[u][char_idx]++;
        for(int c = 0; c < 26; c++) {
            ans = max(ans, dp[u][c]);
        }
    }
    cout << ans << "
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