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
    vll freq(71,0);
    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;
        freq[x]++;
    }
    // Primes <= 70
    vi primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                          31, 37, 41, 43, 47, 53, 59, 61, 67};
 
    // Precompute mask for each value 1..70
    vi mask(71, 0);
    for (int x = 1; x <= 70; x++) {
        int y = x;
        int m = 0;
        for (int i = 0; i < (int)primes.size(); i++) {
            int p = primes[i];
            int cnt = 0;
            while (y % p == 0) {
                y /= p;
                cnt ^= 1; // only parity matters
            }
            if (cnt) m |= (1 << i);
        }
        mask[x] = m;
    }
 
    int S = 1 << primes.size();
    vector<long long> dp(S, 0), ndp(S, 0);
    dp[0] = 1;
 
    // Precompute powers of 2
    vector<long long> pow2(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }
 
    for (int v = 1; v <= 70; v++) {
        if (freq[v] == 0) continue;
 
        long long ways = pow2[freq[v] - 1]; // even or odd count
        int m = mask[v];
 
        fill(ndp.begin(), ndp.end(), 0);
 
        for (int s = 0; s < S; s++) {
            long long add1 = (dp[s] * ways) % MOD;
            long long add2 = (dp[s ^ m] * ways) % MOD;
            ndp[s] = (add1 + add2) % MOD;
        }
 
        dp.swap(ndp);
    }
 
    long long ans = (dp[0] - 1 + MOD) % MOD; // remove empty subset
    cout << ans << '
';
 
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