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
    ll r, c;
    cin >> r >> c;
    vvi grid(r, vi(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> grid[i][j];
        }
    }
    vector<vector<ll>> dp1, dp2, dp3, dp4;
    dp1 = dp2 = dp3 = dp4 = vector<vector<ll>>(r, vector<ll>(c, 0));
    // dp1 : from top left matrix[0][0] to matrix[i][j]
    // dp2 : from top right matrix[0][c-1] to matrix[i][j]
    // dp3 : from bottom left matrix[r-1][0] to matrix[i][j]
    // dp4 : from bottom right matrix[r-1][c-1] to matrix[i][j]
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j){
            if(i == 0 && j == 0) dp1[i][j] = grid[i][j];
            else if(i == 0) dp1[i][j] = dp1[i][j-1] + grid[i][j];
            else if(j == 0) dp1[i][j] = dp1[i-1][j] + grid[i][j];
            else dp1[i][j] = max(dp1[i-1][j], dp1[i][j-1]) + grid[i][j];
        }
    }
 
    for(int i = 0; i < r; ++i) {
        for (int j = c-1; j >= 0; --j){
            if(i == 0 && j == c-1) dp2[i][j] = grid[i][j];
            else if(i == 0) dp2[i][j] = dp2[i][j+1] + grid[i][j];
            else if(j == c-1) dp2[i][j] = dp2[i-1][j] + grid[i][j];
            else dp2[i][j] = max(dp2[i-1][j], dp2[i][j+1]) + grid[i][j];
        }
    }
 
    for(int i = r-1; i >= 0; --i) {
        for (int j = 0; j < c; ++j){
            if(i == r-1 && j == 0) dp3[i][j] = grid[i][j];
            else if(i == r-1) dp3[i][j] = dp3[i][j-1] + grid[i][j];
            else if(j == 0) dp3[i][j] = dp3[i+1][j] + grid[i][j];
            else dp3[i][j] = max(dp3[i+1][j], dp3[i][j-1]) + grid[i][j];
        }
    }
 
    for(int i = r-1; i >= 0; --i) {
        for (int j = c-1; j >= 0; --j){
            if(i == r-1 && j == c-1) dp4[i][j] = grid[i][j];
            else if(i == r-1) dp4[i][j] = dp4[i][j+1] + grid[i][j];
            else if(j == c-1) dp4[i][j] = dp4[i+1][j] + grid[i][j];
            else dp4[i][j] = max(dp4[i+1][j], dp4[i][j+1]) + grid[i][j];
        }
    }
 
    ll ans = 0;
    for(int i = 1; i < r-1; ++i) {
        for(int j = 1; j < c-1; ++j) {
            ll ans1 = dp1[i-1][j] + dp3[i][j-1] + dp2[i][j+1] + dp4[i+1][j];
            ans = max(ans, ans1);
            ll ans2 = dp2[i-1][j] + dp1[i][j-1] + dp4[i][j+1] + dp3[i+1][j];
            ans = max(ans, ans2);
        }
    }
    cout<< ans << endl;
 
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