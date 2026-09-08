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
 
bool f(string &s, ll cost) {
    if (s[0] == '0') return false;
    rep(i, 1, len(s) - 1) {
        if (s[i] == '0' && s[i - 1] == '0') return false;
    }
 
    if (cost >= 3) return true;
    if (cost == 2) {
        int n = len(s);
        for (int i = 0; i < n;) {
            int j = i;
            while (j + 1 < n && s[j + 1] == s[i]) j++;
            if (s[i] != '0' && j - i + 1 == 2 &&
                i > 0 && j + 1 < n &&
                s[i - 1] != '0' && s[j + 1] != '0') {
                return false;
            }
            i = j + 1;
        }
        return true;
    }
    ll lo = 0, hi = 0;
    rep(i, 0,len(s) - 1) {
        lo--;
        hi++;
        int pos = i + 1;
        if (s[i] == '+') {
            lo = max(lo, pos % 2 ? 1LL :2LL);
        } else if (s[i] == '-') {
            hi = min(hi, pos % 2 ?-1LL : -2LL);
        } else {
            if (pos % 2 || lo > 0 || hi < 0) return false;
            lo = hi = 0;
        }
        if (lo > hi) return false;
    }
 
    return true;
}
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    repl(z, 1, 3) {
        if (f(s, z)) {
            cout << z << endl;
            return;
        }
    }
    cout << -1 << endl;
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