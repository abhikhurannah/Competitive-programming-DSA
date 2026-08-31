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
 
 
struct DoubleHash {
    static const long long M1 = 1000000007LL;
    static const long long M2 = 1000000009LL;
    long long BASE;
    vector<long long> p1, p2, ip1, ip2, h1, h2;
 
    static long long modpow(long long a, long long e, long long mod) {
        long long r = 1 % mod;
        while (e > 0) {
            if (e & 1) r = r * a % mod;
            a = a * a % mod;
            e >>= 1;
        }
        return r;
    }
 
    static long long inv(long long a, long long mod) {
        return modpow(a, mod - 2, mod);
    }
 
    explicit DoubleHash(const string& s, long long base = 911382323LL) {
        BASE = base;
        int n = (int)s.size();
        p1.assign(n, 1);
        p2.assign(n, 1);
        ip1.assign(n, 1);
        ip2.assign(n, 1);
        h1.assign(n, 0);
        h2.assign(n, 0);
 
        long long b1 = BASE % M1, b2 = BASE % M2;
        long long ib1 = inv(b1, M1), ib2 = inv(b2, M2);
 
        for (int i = 1; i < n; i++) {
            p1[i] = p1[i - 1] * b1 % M1;
            p2[i] = p2[i - 1] * b2 % M2;
            ip1[i] = ip1[i - 1] * ib1 % M1;
            ip2[i] = ip2[i - 1] * ib2 % M2;
        }
 
        for (int i = 0; i < n; i++) {
            long long v = (unsigned char)s[i] + 1;
            h1[i] = ((i > 0 ? h1[i - 1] : 0) + v * p1[i]) % M1;
            h2[i] = ((i > 0 ? h2[i - 1] : 0) + v * p2[i]) % M2;
        }
    }
 
    pair<long long, long long> get(int l, int r) const {
        long long x1 = (h1[r] - (l > 0 ? h1[l - 1] : 0) + M1) % M1;
        long long x2 = (h2[r] - (l > 0 ? h2[l - 1] : 0) + M2) % M2;
        x1 = x1 * ip1[l] % M1;
        x2 = x2 * ip2[l] % M2;
        return {x1, x2};
    }
};
void solve() {
    string s, alpha;
    cin >> s >> alpha;
    int k;
    cin >> k;
 
    int n = s.size();
    DoubleHash dh(s, 31);
 
    vector<int> bad(26);
    for(int i = 0; i < 26; i++) {
        bad[i] = (alpha[i] == '0');
    }
 
    unordered_set<long long> seen;
 
    for(int i = 0; i < n; i++) {
        int isbad = 0;
        for(int j = i; j < n; j++) {
            isbad += bad[s[j] - 'a'];
            if(isbad > k) break;
 
            auto [h1, h2] = dh.get(i, j);
            long long combined = (h1 << 32) ^ h2;
 
            seen.insert(combined);
        }
    }
 
    cout << seen.size() << endl;
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