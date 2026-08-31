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
 
ll get_g(ll ta, ll t, ll ka, ll kb, const vll& prefA, const vll& prefB, int szA, int szB) {
    ll rem_a = min((ll)szA, max(0LL, ka - ta));
    ll rem_b = min((ll)szB, max(0LL, kb - (t - ta)));
    return prefA[rem_a] + prefB[rem_b];
}
 
ll f(ll ka, ll kb, const vll& prefA, const vll& prefB, const vll& prefC, int szA, int szB, int szC) {
    ll max_sum = 0;
    ll max_t = min((ll)szC, ka + kb);
    for (ll t = 0; t <= max_t; t++) {
        ll L = max(0LL, t - kb);
        ll R = min(t, ka);
        if (L > R) continue;
 
        ll low = L, high = R, best_ta = L;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (mid < R) {
                if (get_g(mid + 1, t, ka, kb, prefA, prefB, szA, szB) >= get_g(mid, t, ka, kb, prefA, prefB, szA, szB)) {
                    best_ta = mid + 1;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            } else {
                high = mid - 1;
            }
        }
        ll current_sum = prefC[t] + get_g(best_ta, t, ka, kb, prefA, prefB, szA, szB);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}
 
void solve() {
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
 
    vll a(x), b(y);
    rep(i, 0, x - 1) cin >> a[i];
    rep(i, 0, y - 1) cin >> b[i];
 
    vll A, B, C;
    int i = 0, j = 0;
    while (i < x && j < y) {
        if (a[i] == b[j]) {
            C.pb(a[i]);
            i++; j++;
        } else if (a[i] < b[j]) {
            A.pb(a[i]);
            i++;
        } else {
            B.pb(b[j]);
            j++;
        }
    }
    while (i < x) { A.pb(a[i]); i++; }
    while (j < y) { B.pb(b[j]); j++; }
 
    reverse(all(A));
    reverse(all(B));
    reverse(all(C));
 
    int szA = A.size(), szB = B.size(), szC = C.size();
    vll prefA(szA + 1, 0), prefB(szB + 1, 0), prefC(szC + 1, 0);
 
    rep(k, 0, szA - 1) prefA[k + 1] = prefA[k] + A[k];
    rep(k, 0, szB - 1) prefB[k + 1] = prefB[k] + B[k];
    rep(k, 0, szC - 1) prefC[k + 1] = prefC[k] + C[k];
 
    ll ans = 0;
    ans = max(ans, f(n, m - 1, prefA, prefB, prefC, szA, szB, szC));
    ans = max(ans, f(n - 1, m, prefA, prefB, prefC, szA, szB, szC));
 
    cout << ans << "
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