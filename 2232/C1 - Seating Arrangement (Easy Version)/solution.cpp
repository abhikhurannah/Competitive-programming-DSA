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
    ll n, x, s;
    cin >> n >> x >> s;
    string str;
    cin >> str;
    // dp[i] stores the maximum people seated given exactly 'i' tables are non-empty
    vll dp(x + 1, -1);
    dp[0] = 0;
    
    for (char c : str) {
        vll next_dp(x + 1, -1);
        
        rep(i, 0, x) {
            if (dp[i] == -1) continue;
            
            // Option 1: Kick this person out of the party (state remains the same)
            next_dp[i] = max(next_dp[i], dp[i]);
            
            if (c == 'I') {
                // Introvert must open a completely new empty table
                if (i + 1 <= x) {
                    next_dp[i + 1] = max(next_dp[i + 1], dp[i] + 1);
                }
            } 
            else if (c == 'E') {
                // Extrovert must sit at an already occupied table that has space
                if (dp[i] < i * s) {
                    next_dp[i] = max(next_dp[i], dp[i] + 1);
                }
            } 
            else if (c == 'A') {
                // Ambivert can open a new table
                if (i + 1 <= x) {
                    next_dp[i + 1] = max(next_dp[i + 1], dp[i] + 1);
                }
                // Or sit at an existing partially filled table
                if (dp[i] < i * s) {
                    next_dp[i] = max(next_dp[i], dp[i] + 1);
                }
            }
        }
        dp = move(next_dp);
    }
    
    ll ans = 0;
    rep(i, 0, x) {
        ans = max(ans, dp[i]);
    }
    
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