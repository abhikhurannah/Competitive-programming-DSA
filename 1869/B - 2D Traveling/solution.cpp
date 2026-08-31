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
    ll a, b;
    cin >> n >> k >> a >> b;
 
    // Read points into 64-bit pairs
    vpll points(n);
    for (int i = 0; i < n; ++i) {
        ll x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }
 
    // Convert 1-based indices to 0-based
    pll start = points[a - 1];
    pll dest  = points[b - 1];
 
    if (k == 0) {
        cout << llabs(start.first - dest.first)
             + llabs(start.second - dest.second)
             << "
";
        return;
    }
    
    // Build set of special-zone points (first k points)
    set<pll> visited;
    for (int i = 0; i < k; ++i) {
        visited.insert(points[i]);
    }
 
    ll ans = LLONG_MAX;
 
    bool inStart = visited.count(start);
    bool inDest  = visited.count(dest);
 
    if (inStart && inDest) {
        // both in zone → teleport zero cost
        ans = 0;
    }
    else if (inStart) {
        // start in zone, dest not → walk from best zone point to dest
        for (auto [px, py] : visited) {
            ll dist = llabs(px - dest.first) + llabs(py - dest.second);
            ans = min(ans, dist);
        }
    }
    else if (inDest) {
        // dest in zone, start not → walk from start to best zone point
        for (auto [px, py] : visited) {
            ll dist = llabs(px - start.first) + llabs(py - start.second);
            ans = min(ans, dist);
        }
    }
    else {
        // both outside: walk to zone, teleport, walk to dest
        // best is: min over from-zone and to-zone
        ll bestToZone   = LLONG_MAX;
        ll bestFromZone = LLONG_MAX;
        for (auto [px, py] : visited) {
            bestToZone   = min(bestToZone, llabs(px - start.first) + llabs(py - start.second));
            bestFromZone = min(bestFromZone, llabs(px - dest.first) + llabs(py - dest.second));
        }
        ans = bestToZone + bestFromZone;
        // also allow direct walk if cheaper
        ll direct = llabs(start.first - dest.first) + llabs(start.second - dest.second);
        ans = min(ans, direct);
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