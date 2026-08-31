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
 
 
 
 
struct SparseTable {
    int n;
    int max_k;
    vector<vll> st;
    vi lg;
 
    ll combine(ll a, ll b) {
        return max(a, b);
    }
 
    // Initialize and build the sparse table
    void build(const vll &a) {
        n = a.size();
        
        // Calculate maximum power of 2 needed: log2(n)
        max_k = 0;
        while ((1 << max_k) <= n) {
            max_k++;
        }
 
        // Precompute logarithms for O(1) query lookups
        lg.assign(n + 1, 0);
        for (int i = 2; i <= n; i++) {
            lg[i] = lg[i / 2] + 1;
        }
 
        // Initialize table structure
        st.assign(n, vll(max_k, 0));
 
        // Base case: intervals of length 2^0 = 1
        for (int i = 0; i < n; i++) {
            st[i][0] = a[i];
        }
 
        // Compute table values using DP: st[i][j] = combine(st[i][j-1], st[i + 2^(j-1)][j-1])
        for (int j = 1; j < max_k; j++) {
            for (int i = 0; i + (1 << j) <= n; i++) {
                st[i][j] = combine(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
    }
 
    // O(1) Range Query for idempotent functions (min, max, gcd, bitwise AND/OR)
    ll query(int l, int r) {
        if (l > r) swap(l, r);
        int j = lg[r - l + 1];
        return combine(st[l][j], st[r - (1 << j) + 1][j]);
    }
};
 
void solve() {
    ll n,m;
    cin >> n >> m;
    vll a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    SparseTable table;
    table.build(a);
    ll q;
    cin >> q;
    while (q--) {
        ll xs, ys, xf, yf, k;
        cin >> xs >> ys >> xf >> yf >> k;
        ys--, yf--;
 
        if(abs(xs - xf) % k != 0 || abs(ys - yf) % k != 0) {
            cout << "NO
";
            continue;
        }
        int highest_row = xs + ((n - xs) / k) * k;
 
        int max_obstacle = table.query(ys, yf);
 
        if (highest_row > max_obstacle) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
 
    }
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