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
    int n;
    cin >> n;
    vll a(n);
    repl(i, 0, n - 1) cin >> a[i];
    
    vector<pair<ll, ll>> valid_cands;
    
    ll curr = a[0];
    for (int step = 0; step <= 100; step++) {
        bool found = false;
        for (auto& cand : valid_cands) {
            if (cand.first == curr) {
                found = true;
                break;
            }
        }
        if (!found) {
            valid_cands.push_back({curr, step});
        }
        
        if (curr % 2 == 0) {
            curr /= 2;
        } else {
            curr += 1;
        }
    }
 
    for (int i = 1; i < n; i++) {
        ll curr = a[i];
        vector<ll> seq(101);
        for (int step = 0; step <= 100; ++step) {
            seq[step] = curr;
            if (curr % 2 == 0) {
                curr /= 2;
            } else {
                curr += 1;
            }
        }
        
        vector<pair<ll, ll>> next_cands;
        for (auto& cand : valid_cands) {
            int min_step = -1;
            for (int step = 0; step <= 100; ++step) {
                if (seq[step] == cand.first) {
                    min_step = step;
                    break;
                }
            }
            if (min_step != -1) {
                next_cands.push_back({cand.first, cand.second + min_step});
            }
        }
        valid_cands = next_cands;
    }
 
    ll ans = -1;
    for (auto& cand : valid_cands) {
        if (ans == -1 || cand.second < ans) {
            ans = cand.second;
        }
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