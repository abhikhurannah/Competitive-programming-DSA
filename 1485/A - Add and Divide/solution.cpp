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
#include <map>
#include <set>
#include <limits>
#include <random>
#include <iomanip>
#include <numeric>
#include <cassert>
#include <bitset>
using namespace std;
 
// Type aliases
using ll    = long long;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vi    = vector<int>;
using vll   = vector<ll>;
 
// Macros
#define all(x)            (x).begin(), (x).end()
#define len(x)            static_cast<int>((x).size())
#define F                 first
#define S                 second
#define pb                push_back
#define mpr               make_pair
 
// Loop macros
#define rep(i, a, b)      for (int i = (a); i <=(b); ++i)
#define per(i, a, b)      for (int i = (b); i >= (a); --i)
#define repl(i, a, b)      for (ll i = (a); i <= (b); ++i)
#define perl(i, a, b)      for (ll i = (b); i >= (a); --i)
 
// Fast Exponentiation
ll mod_exp(ll base, ll exp, ll mod) {
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
 
// Fast IO
#define fast_io           ios::sync_with_stdio(false); cin.tie(nullptr)
 
// Bit operations
#define setbits(x)        __builtin_popcountll(x)
#define zerobits(x)       __builtin_ctzll(x)
 
// Heaps
using minheap_i = priority_queue<int, vector<int>, greater<int>>;
using maxheap_i = priority_queue<int>;
using minheap_pii = priority_queue<pii, vector<pii>, greater<pii>>;
using maxheap_pii = priority_queue<pii>;
 
// Constants
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
const ll  LLINF  = 1e18;
 
// Print vector
template <typename T>
void print(const vector<T> &v) {
    for (const auto &x : v) {
        cout << x << " ";
    }
    cout << "
";
}
 
// Debug (comment out in submission)
#define debug(x)         cerr << #x << " = " << (x) << '
'
 
// DSU with union by rank and size
struct DisjointSet {
    vector<int> parent, rnk, sizeArr;
    DisjointSet(int n) : parent(n+1), rnk(n+1, 0), sizeArr(n+1, 1) {
        rep(i, 0, n+1) parent[i] = i;
    }
    int findUPar(int u) {
        return parent[u] == u ? u : parent[u] = findUPar(parent[u]);
    }
    void unionByRank(int u, int v) {
        u = findUPar(u);
        v = findUPar(v);
        if (u == v) return;
        if (rnk[u] < rnk[v]) swap(u, v);
        parent[v] = u;
        if (rnk[u] == rnk[v]) rnk[u]++;
    }
    void unionBySize(int u, int v) {
        u = findUPar(u);
        v = findUPar(v);
        if (u == v) return;
        if (sizeArr[u] < sizeArr[v]) swap(u, v);
        parent[v] = u;
        sizeArr[u] += sizeArr[v];
    }
};
 
// Custom comparator example
struct cmpPair {
    bool operator()(const pii &a, const pii &b) const {
        if (a.F != b.F)
            return a.F < b.F;
        return a.S > b.S;
    }
};
 
 
void solve() {
    ll a, b;
    cin >> a >> b;
    ll ans = 1e8;
    repl(i,0,31){
        ll new_a = a;
        ll new_b = b + i;
        if(new_b == 1) continue;
        ll op = i;
        while(new_a >0){
            new_a /= new_b;
            op++;
        }
        ans = min(ans, op);
    }
    cout << ans << endl;
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