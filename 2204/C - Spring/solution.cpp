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
 
typedef __int128_t int128; 
 
long long gcd(long long a, long long b) {
    while (b) { a %= b; swap(a, b); }
    return a;
}
 
long long safe_lcm(long long a, long long b, long long limit) {
    if (a == 0 || b == 0) return 0;
    int128 res = (int128)a / gcd(a, b) * b;
    if (res > (int128)limit) return limit + 1; 
    return (long long)res;
}
 
long long count(long long n, ll m) {
    return m / n;
}
 
void solve() {
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
 
    ll nab = safe_lcm(a, b, m);
    ll nac = safe_lcm(a, c, m);
    ll nbc = safe_lcm(b, c, m);
    ll nabc = safe_lcm(nab, c, m);
 
 
    ll Ca = count(a,m), Cb = count(b,m), Cc = count(c,m);
    ll Cab = count(nab,m), Cac = count(nac,m), Cbc = count(nbc,m);
    ll Cabc = count(nabc,m);
 
    ll alice = 6 * Ca - 3 * Cab - 3 * Cac + 2 * Cabc;
    ll bob   = 6 * Cb - 3 * Cab - 3 * Cbc + 2 * Cabc;
    ll carol = 6 * Cc - 3 * Cac - 3 * Cbc + 2 * Cabc;
 
    cout << alice << " " << bob << " " << carol << endl;
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