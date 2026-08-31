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
 
int query(int i,int j){
    cout<<"? "<<i+1 << " "<<j+1<<endl;
    int ans;
    cin>>ans;
    return ans;
}
int common(pii a, pii b){
    if(a.F == b.F || a.F == b.S) return a.F;
    return a.S;
}
int other(pii p,int a){
    if(p.F == a) return p.S;
    return p.F;
}
void solve() {
    vi arr = {4, 8, 15, 16, 23, 42};
    map<int,pii>mp;
    rep(i,0,5){
        rep(j,i+1,5){
            mp[arr[i]*arr[j]] = mpr(arr[i],arr[j]);
        }
    }
    vi ans(6);
    pii p1 = mp[query(0,1)];
    pii p2 = mp[query(1,2)];
    ans[1] = common(p1,p2);
    ans[0] = other(p1,ans[1]);
    ans[2] = other(p2,ans[1]);
    pii p3 = mp[query(3,4)];
    pii p4 = mp[query(4,5)];
    ans[4] = common(p3,p4);
    ans[3] = other(p3,ans[4]);
    ans[5] = other(p4,ans[4]);
    cout << "! ";
    print(ans);
}
 
int main() {
    // fast_io;
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}