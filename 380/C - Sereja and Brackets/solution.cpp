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
 
struct Node {
    int open;    
    int close;   
    int matched; 
    Node(): open(0), close(0), matched(0) {}
};
 
class SGTree {
public:
    vector<Node> tree;
    ll n;
    SGTree(ll n = 0) {
        tree.assign(4 * n + 5, Node());
    }
 
    void build(const vector<ll>& arr, ll node, ll low, ll high) {
        if (low == high) {
            tree[node] = Node();
            if (arr[low] == -1) {
                tree[node].open = 1;
            } else {
                tree[node].close = 1;
            }
            return;
        }
        ll mid = (low + high) >> 1;
        build(arr, 2*node+1, low, mid);
        build(arr, 2*node+2, mid+1, high);
        tree[node] = mergeNodes(tree[2*node+1], tree[2*node+2]);
    }
 
 
    Node mergeNodes(const Node &L, const Node &R) {
        Node res;
        int cross = min(L.open, R.close); 
        res.matched = L.matched + R.matched + cross;
        res.open = L.open + R.open - cross;
        res.close = L.close + R.close - cross;
        return res;
    }
 
    Node query(ll node, ll low, ll high, ll l, ll r) {
        if (r < low || high < l) return Node(); 
        if (l <= low && high <= r) return tree[node];
        ll mid = (low + high) >> 1;
        Node left = query(2*node+1, low, mid, l, r);
        Node right = query(2*node+2, mid+1, high, l, r);
        return mergeNodes(left, right);
    }
 
};
 
 
 
void solve() {
    string s; cin >> s;
    int m; cin >> m;
 
    SGTree segTree((ll)s.size());
    vector<ll> arr(s.size());
    for (int i = 0; i < (int)s.size(); ++i) {
        arr[i] = (s[i] == '(') ? -1 : 1; // -1=open, 1=close
    }
    segTree.build(arr, 0, 0, (ll)s.size() - 1);
 
    while (m--) {
        int l, r; cin >> l >> r; // 1-indexed
        Node res = segTree.query(0, 0, (ll)s.size() - 1, l - 1, r - 1);
        cout << (res.matched * 2) << '
'; 
    }
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