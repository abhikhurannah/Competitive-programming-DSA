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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    vi del(n, 0);
 
    rep(step, 0, k - 1) {
        vi pref(n + 1, 0);
        vi suff(n + 1, 0);
 
        int c_open = 0;
        for (int i = 0; i < n; ++i) {
            pref[i] = c_open;
            if (!del[i] && s[i] == '(') {
                c_open++;
            }
        }
        pref[n] = c_open;
 
        int c_close = 0;
        for (int i = n - 1; i >= 0; --i) {
            suff[i + 1] = c_close;
            if (!del[i] && s[i] == ')') {
                c_close++;
            }
        }
        suff[0] = c_close;
 
        int min_v = 1e9;
        int min_idx = -1;
        for (int i = 0; i <= n; ++i) {
            int v = pref[i] + suff[i];
            if (v < min_v) {
                min_v = v;
                min_idx = i;
            }
        }
 
        if (min_v == 0) {
            break;
        }
 
        bool deleted = false;
        for (int j = 0; j < min_idx; ++j) {
            if (!del[j] && s[j] == '(') {
                del[j] = 1;
                deleted = true;
                break;
            }
        }
 
        if (!deleted) {
            for (int j = min_idx; j < n; ++j) {
                if (!del[j] && s[j] == ')') {
                    del[j] = 1;
                    deleted = true;
                    break;
                }
            }
        }
    }
 
    for (int i = 0; i < n; ++i) {
        cout << del[i];
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