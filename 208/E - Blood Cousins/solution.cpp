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
 
int n, m;
vvi  adj,up ,levels;
vi depth, tin, tout;
int timer = 0;
 
void dfs(int node, int par, int d){
    depth[node] = d;
    tin[node] = timer++;
    if(d >= levels.size()){
        levels.resize(d+1);
    }
    levels[d].pb(tin[node]);
    
    up[node][0] = par;
    for (int j = 1; j < 20; j++) {
        up[node][j] = up[up[node][j - 1]][j - 1];
    }
 
    for(auto it : adj[node]){
        if(it == par) continue;
        dfs(it,node,d+1);
    }
    tout[node] = timer;
}
int get_kth_par(int node, int p){
    for (int j = 19; j >= 0; j--) {
        if ((p >> j) & 1) {
            node = up[node][j];
        }
    }
    return node;
}
 
void solve() {
    cin >> n;
    adj.assign(n + 1, vector<int>());
    depth.assign(n + 1, 0);
    tin.assign(n + 1, 0);
    tout.assign(n + 1, 0);
    up.assign(n + 1, vector<int>(20, 0));
 
    for(int i = 1; i <=n ; i++){
        int p; cin >> p;
        adj[p].pb(i); // Node with parent 0 gets pushed into adj[0]
    }
 
    dfs(0, 0, 0); // node (1) with dummy par (0)
 
    cin >> m;
    while(m--){
        int v, p;
        cin >> v >> p;
        if(depth[v] <= p){
            cout << 0 << " ";
            continue;
        }
        int kth_par = get_kth_par(v,p);
        
        // Euler tour to find subtree of kth par node
        auto &tin_list = levels[depth[v]];
        auto right = upper_bound(all(tin_list) , tout[kth_par]);
        auto left =  lower_bound(all(tin_list) , tin[kth_par]);
 
        int cousins = (right - left) - 1;
        cout << max(cousins, 0) << " ";
    }
    cout << endl;
    
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