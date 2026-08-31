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
    string s, w;
    cin >> s;
    cin >> w;
    // incomparable  = total - comparable --------> 1
    // comparable = ways(s >= w) + ways(s <= w) - ways(s == w) --------> 2
 
    ll cnt_q = 0;
    rep(i, 0, n-1) {
        if(s[i] == '?') cnt_q++;
        if(w[i] == '?') cnt_q++;
    }
    ll total = mod_exp(10, cnt_q); // total ways to replace all '?'
 
    // for ways(s >= w)
    ll ways1 = 1;
    rep(i, 0, n-1) {
        if(s[i] != '?' && w[i] != '?') {
            if(s[i] < w[i]) {
                ways1 = 0;
                break;
            }
        }else if(s[i] == '?' && w[i] == '?') {
            ways1 = (ways1 * 55) % MOD; // 55 pairs out of 100 pairs satisfy s[i] >= w[i]
        }else if(s[i] == '?' && w[i] != '?') {
            ways1 = (ways1 * (10 - (w[i] - '0'))) % MOD; 
        }else if(s[i] != '?' && w[i] == '?') {
            ways1 = (ways1 * ((s[i] - '0') + 1)) % MOD; 
        }
    }
 
    // for ways(s <= w)
    ll ways2 = 1;
    rep(i, 0, n-1) {
        if(s[i] != '?' && w[i] != '?') {
            if(s[i] > w[i]) {
                ways2 = 0;
                break;
            }
        }else if(s[i] == '?' && w[i] == '?') {
            ways2 = (ways2 * 55) % MOD; 
        }else if(s[i] == '?' && w[i] != '?') {
            ways2 = (ways2 * ((w[i] - '0') + 1)) % MOD; 
        }else if(s[i] != '?' && w[i] == '?') {
            ways2 = (ways2 * (10 - (s[i] - '0'))) % MOD; 
        }
    }
    // for ways(s == w)
    ll ways3 = 1;
    rep(i, 0, n-1) {
        if(s[i] != '?' && w[i] != '?') {
            if(s[i] != w[i]) {
                ways3 = 0;
                break;
            }
        }else if(s[i] == '?' && w[i] == '?') {
            ways3 = (ways3 * 10) % MOD; // 10 pairs out of 100 pairs satisfy s[i] == w[i]
        }
    }
    ll comparable = (ways1 + ways2 - ways3 + MOD) % MOD; 
 
    ll incomparable = (total - comparable + MOD) % MOD;
    cout << incomparable << endl;
 
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