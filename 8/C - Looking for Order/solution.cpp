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
ll calDist(pair<ll, ll> a, pair<ll, ll> b) {
    ll dx = abs(a.F - b.F);
    ll dy = abs(a.S - b.S);
    return dx * dx + dy * dy;
}
 
void solve() {
    ll sx, sy;
    cin >> sx >> sy;
 
    ll n;
    cin >> n;
 
    vector<pair<ll, ll>> points(n);
 
    for (int i = 0; i < n; i++) {
        cin >> points[i].F >> points[i].S;
    }
 
    vll dist0(n);
 
    for (int i = 0; i < n; i++) {
        dist0[i] = calDist(points[i], {sx, sy});
    }
 
    vector<vector<ll>> dist(n, vector<ll>(n));
 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            dist[i][j] = dist[j][i] = calDist(points[i], points[j]);
        }
    }
 
    int total_states = 1 << n;
 
    vll dp(total_states, LLINF);
    vector<int> parent(total_states, -1);
 
    // stores which object(s) were taken in this transition
    vector<pair<int, int>> take(total_states, {-1, -1});
 
    dp[0] = 0;
 
    for (int mask = 0; mask < total_states; mask++) {
 
        if (dp[mask] == LLINF) continue;
 
        int rem = ((1 << n) - 1) ^ mask;
 
        if (rem == 0) continue;
 
        int i = __builtin_ctz(rem);
 
        // take i alone
        int nmask1 = mask | (1 << i);
 
        ll cost1 = dp[mask] + 2 * dist0[i];
 
        if (cost1 < dp[nmask1]) {
            dp[nmask1] = cost1;
            parent[nmask1] = mask;
            take[nmask1] = {i, -1};
        }
 
        // take i with j
        for (int j = i + 1; j < n; j++) {
 
            if (mask & (1 << j)) continue;
 
            int nmask2 = mask | (1 << i) | (1 << j);
 
            ll cost2 =
                dp[mask]
                + dist0[i]
                + dist0[j]
                + dist[i][j];
 
            if (cost2 < dp[nmask2]) {
                dp[nmask2] = cost2;
                parent[nmask2] = mask;
                take[nmask2] = {i, j};
            }
        }
    }
 
    cout << dp[total_states - 1] << '
';
 
    vector<vector<int>> trips;
 
    int mask = total_states - 1;
 
    while (mask) {
 
        auto [a, b] = take[mask];
 
        vector<int> trip;
 
        trip.push_back(0);
        trip.push_back(a + 1);
 
        if (b != -1)
            trip.push_back(b + 1);
 
        trip.push_back(0);
 
        trips.push_back(trip);
 
        mask = parent[mask];
    }
    reverse(all(trips));
    vector<int> ans = {0};
 
    for (auto &trip : trips) {
        for (int i = 1; i < (int)trip.size(); i++) {
            ans.push_back(trip[i]);
        }
    }
 
    for (int x : ans)
        cout << x << " ";
    cout << '
';
}
 
int main() {
    fast_io;
 
    int tc = 1;
 
    while (tc--) {
        solve();
    }
 
    return 0;
}