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
 
int tanu;
int nishu;
ll kabir;
vector<ll> arjun;
vector<ll> jawab;
 
bool ankush_prime(ll x) {
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (ll dip = 3; dip * dip <= x; dip += 2)
        if (x % dip == 0) return false;
    return true;
}
 
ll ravi_extgcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) { x = 1; y = 0; return a; }
    ll x1, y1;
    ll g = ravi_extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}
 
ll deepak_modinv(ll a, ll m) {
    ll x, y;
    ll g = ravi_extgcd(a, m, x, y);
    if (g != 1) return -1;
    x %= m;
    if (x < 0) x += m;
    return x;
}
void solve() {
    cin >> nishu >> kabir;
    arjun.assign(nishu, 0);
    for (int i = 0; i < nishu; ++i) cin >> arjun[i];
    ll p = -1;
    for (ll chetan = 2; chetan <= kabir + 1; ++chetan) {
        if (ankush_prime(chetan) && (kabir % chetan != 0)) {
            p = chetan;
            break;
        }
    }
    if (p == -1) {
        ll chetan = kabir + 1;
        while (!ankush_prime(chetan) || (kabir % chetan == 0)) ++chetan;
        p = chetan;
    }
    ll inv = deepak_modinv(kabir % p, p);
    jawab.assign(nishu, 0);
    for (int i = 0; i < nishu; ++i) {
        ll ai_mod = arjun[i] % p;
        ll need = (p - ai_mod) % p;
        ll m = (need * inv) % p;
        jawab[i] = arjun[i] + m * kabir;
    }
    for (int i = 0; i < nishu; ++i) {
        cout << jawab[i]<<" ";
    }
    cout << '
';
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