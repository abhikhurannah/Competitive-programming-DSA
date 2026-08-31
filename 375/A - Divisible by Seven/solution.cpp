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
    string s;
    cin >> s;
    
    // Step 1: Count the frequency of all digits
    vector<int> freq(10, 0);
    for (char c : s) {
        freq[c - '0']++;
    }
    
    // Remove the guaranteed 1, 6, 8, 9
    freq[1]--;
    freq[6]--;
    freq[8]--;
    freq[9]--;
    
    // Step 2: Build the prefix with non-zero digits and track its mod 7 remainder
    // string prefix = "";
    int rem = 0;
    
    // Notice we start at 1 to avoid leading zeros in the prefix
    for (int i = 1; i <= 9; i++) {
        while (freq[i] > 0) {
            // prefix += to_string(i);
            cout << i;
            rem = (rem * 10 + i) % 7;
            freq[i]--;
        }
    }
    
    // Step 3: Lookup table for permutations of 1689 that yield remainders 0 through 6
    string perms[7] = {"1869", "1968", "1689", "6198", "1698", "1986", "1896"};
    
    // Shifting prefix by 4 digits multiplies it by 10000. (10000 % 7 = 4)
    // We need: (rem * 4 + permutation_rem) % 7 == 0
    int required_rem = (7 - (rem * 4) % 7) % 7;
    
    // Step 4: Output the final answer
    cout << perms[required_rem];
    
    // Append all the remaining zeros at the very end
    while (freq[0] > 0) {
        cout << '0';
        freq[0]--;
    }
    cout << "
";
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