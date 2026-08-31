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
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    // 1) sort a copy, build prefix sums
    vll sorted_a = a;
    sort(all(sorted_a));
    vll prefix(n, 0);
    prefix[0] = sorted_a[0];
    for (ll i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + sorted_a[i];
    }
 
    // 2) compute extra[i] = how many more you can peel starting at sorted index i
    vll extra(n, 0);
    for (ll i = n - 2; i >= 0; --i) {
        if (prefix[i] >= sorted_a[i + 1]) {
            extra[i] = extra[i + 1] + 1;
        } else {
            extra[i] = 0;
        }
    }
 
    // 3) build a map from value -> list of its positions in the sorted array
    unordered_map<ll, vector<int>> where;
    where.reserve(n);
    for (int i = 0; i < n; ++i) {
        where[sorted_a[i]].push_back(i);
    }
    // We'll consume them in order
    unordered_map<ll, int> used;
    used.reserve(where.size());
 
    // 4) for each original a[i], find one of its sorted positions, then answer = 
    //    (number of elements strictly smaller = that index) + extra[index]
    for (int i = 0; i < n; ++i) {
        ll x = a[i];
        int idx = where[x][ used[x]++ ];  
        // idx is 0-based: there are `idx` strictly smaller elements
        ll ans = idx + extra[idx];
        cout << ans << " ";
    }
    cout << "
";
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