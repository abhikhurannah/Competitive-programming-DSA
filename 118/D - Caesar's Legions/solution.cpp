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
 
ll mod = 1e8;
ll dp[105][105][15][2];
ll  f(ll a,ll b, ll cnt, ll type, ll k1, ll k2){
    if(a == 0 && b == 0) return 1;
    if(a < 0 || b < 0) return 0;
    if(cnt > k1 && type == 0) return 0;
    if(cnt > k2 && type == 1) return 0;
    if(dp[a][b][cnt][type] != -1) return dp[a][b][cnt][type];
 
    ll choice1 = 0;
    ll choice2 = 0;
    if(type == 0 && cnt < k1){
        choice1 = f(a-1, b, cnt+1, 0, k1, k2);
    }
    else if(type == 1 && cnt < k2){
        choice1 = f(a, b-1, cnt+1, 1, k1, k2);
    }
    if(type == 0){
        choice2 = f(a, b-1, 1, 1, k1, k2);
    }
    else if(type == 1){
        choice2 = f(a-1, b, 1, 0, k1, k2);
    }
    return dp[a][b][cnt][type] = (choice1 + choice2) % mod;
}
void solve() {
    ll n1,n2,k1,k2;
    cin >> n1 >> n2 >> k1 >> k2;
    // dp[i][j][k][type]
    
    // i: Number of footmen remaining to be placed.
    // j: Number of horsemen remaining to be placed.
    // k: The current length of the consecutive streak of the last placed type.
    // type: Who is currently standing at the end of the line (0 for Footman, 1 for Horseman).
    
    memset(dp, -1, sizeof(dp));
    ll ans = (f(n1-1,n2,1,0,k1,k2) + f(n1,n2-1,1,1,k1,k2)) % mod;  
    cout << ans << endl;
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