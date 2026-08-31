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
 
 
/*
    delta = c0 - c1 (c0 --> no of 0 in whole string ...)
 
    ( |d0 - d1| <= 1 )      (d0 --> no of 0 will be deleted ...)
    (k0 = c0 - d0)    k0 --> no of 0 remain in the string after deletion
    (k1 = c1 - d1) 
 
    --> delta-1 <= (k0 - k1) <= delta + 1 
    --> delta-1 <= v <= delta + 1            (v = k0-k1)
 
    for string to be alternating, possible values of v is (-1, 0, 1).
 
 
*/
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    ll cnt0 = 0, cnt1 = 0;
    for(auto &c : s){
        if(c=='0') cnt0++;
        else cnt1++;
    }
 
    ll delta = cnt0 - cnt1;
 
    ll start0 = 0, start1 = 0;
    char exp0 = '0' , exp1 = '1';
    for(auto &c : s){
        if(c == exp0){
            start0++;
            exp0 = (exp0 =='0') ? '1' : '0';
        }
        if(c == exp1){
            start1++;
            exp1 = (exp1 =='0') ? '1' : '0';
        }
    }
 
    ll len00 = (start0 > 0) ?  (start0%2==1 ? start0 : start0-1) : -1 ;
    ll len01 = (start0 > 0) ?  (start0%2==0 ? start0 : start0-1) : -1 ;
    ll len10 = (start1 > 0) ?  (start1%2==0 ? start1 : start1-1) : -1 ;
    ll len11 = (start1 > 0) ?  (start1%2==1 ? start1 : start1-1) : -1 ;
 
 
    ll maxlen = -1;
    for(int v : {-1, 0, 1}){
        if(v >= delta-1 && v<=delta+1){
            if(v==1){
                maxlen = max(maxlen, len00);
            }else if(v==-1){
                maxlen = max(maxlen, len11);
            }else{
                maxlen = max({maxlen,len10,len01});
            }
        }
    }
    if(maxlen == -1) cout<<-1<<endl;
    else cout<<n-maxlen<<endl;
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