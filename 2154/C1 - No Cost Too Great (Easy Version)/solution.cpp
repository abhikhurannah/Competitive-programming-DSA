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
 
 
const int MAXN = 2e5 + 10;
vector<int> spf(MAXN + 1);
 
void sieve() {
    for (int i = 1; i <= MAXN; i++) spf[i] = i;
 
    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}
 
vector<int> get_factors(int x) {
    vector<int> f;
 
    while (x > 1) {
        int p = spf[x];
        f.push_back(p);
 
        while (x % p == 0)
            x /= p;
    }
 
    return f;
}
 
void solve() {
 
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    map<int,int> freq;
 
    // check answer = 0
    for (int x : a) {
 
        auto factors = get_factors(x);
 
        for (int p : factors) {
            freq[p]++;
        }
    }
 
    for (auto [p,c] : freq) {
        if (c >= 2) {
            cout << 0 << '
';
            return;
        }
    }
 
    // check answer = 1
    for (int i = 0; i < n; i++) {
 
        auto own = get_factors(a[i]);
 
        // remove own factors temporarily
        for (int p : own)
            freq[p]--;
 
        auto nxt = get_factors(a[i] + 1);
 
        bool ok = false;
 
        for (int p : nxt) {
            if (freq[p] > 0) {
                ok = true;
                break;
            }
        }
 
        // restore
        for (int p : own)
            freq[p]++;
 
        if (ok) {
            cout << 1 << '
';
            return;
        }
    }
 
    cout << 2 << '
';
}
 
int main() {
    fast_io;
    sieve();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}