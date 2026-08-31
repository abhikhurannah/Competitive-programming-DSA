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
#include <sstream>
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
// const int INF    = 1e9;
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
 
const ll INF = 1e18; 
 
struct segmentTree {
    int n;
    vector<ll> st, lazy;
    vector<int> islazy;
 
    void init(int _n) {
        n = _n;
        st.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
        islazy.assign(4 * n, 0);
    }
 
    ll combine(ll a, ll b) {
        return min(a, b);
    }
 
    void push(int idx, int start, int end) {
        if (islazy[idx]) {
            st[idx] += lazy[idx];
            if (start != end) {
                lazy[2 * idx + 1] += lazy[idx];
                lazy[2 * idx + 2] += lazy[idx];
                islazy[2 * idx + 1] = islazy[2 * idx + 2] = 1;
            }
            islazy[idx] = lazy[idx] = 0;
        }
    }
 
    void buildTree(int idx, int start, int end, vector<ll> &a) {
        if (start == end) {
            st[idx] = a[start];
            return;
        }
        int mid = (start + end) / 2;
        buildTree(2 * idx + 1, start, mid, a);
        buildTree(2 * idx + 2, mid + 1, end, a);
        st[idx] = combine(st[2 * idx + 1], st[2 * idx + 2]);
    }
 
    ll queryTree(int idx, int start, int end, int l, int r) {
        push(idx, start, end);
        if (start > r || end < l) return INF;
        if (start >= l && end <= r) {
            return st[idx];
        }
        int mid = (start + end) / 2;
        ll left = queryTree(2 * idx + 1, start, mid, l, r);
        ll right = queryTree(2 * idx + 2, mid + 1, end, l, r);
        return combine(left, right);
    }
 
    void updateTree(int idx, int start, int end, int l, int r, ll val) {
        push(idx, start, end);
        if (start > r || end < l) return;
        if (start >= l && end <= r) {
            st[idx] += val;
            if (start != end) {
                lazy[2 * idx + 1] += val;
                lazy[2 * idx + 2] += val;
                islazy[2 * idx + 1] = islazy[2 * idx + 2] = 1;
            }
            return;
        }
        int mid = (start + end) / 2;
        updateTree(2 * idx + 1, start, mid, l, r, val);
        updateTree(2 * idx + 2, mid + 1, end, l, r, val);
        st[idx] = combine(st[2 * idx + 1], st[2 * idx + 2]);
    }
 
    void build(vector<ll> &a) {
        init(a.size());
        buildTree(0, 0, n - 1, a);
    }
 
    // Circular Range Minimum Query
    ll query(int l, int r) {
        if (l <= r) {
            return queryTree(0, 0, n - 1, l, r);
        } else {
            return combine(queryTree(0, 0, n - 1, l, n - 1), 
                           queryTree(0, 0, n - 1, 0, r));
        }
    }
 
    // Circular Range Addition Update
    void update(int l, int r, ll val) {
        if (l <= r) {
            updateTree(0, 0, n - 1, l, r, val);
        } else {
            updateTree(0, 0, n - 1, l, n - 1, val);
            updateTree(0, 0, n - 1, 0, r, val);
        }
    }
};
 
void solve() {
    int n;
    if (!(cin >> n)) return;
 
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    segmentTree tree;
    tree.build(a);
 
    int m;
    cin >> m;
    string dummy;
    getline(cin, dummy);
 
    for (int i = 0; i < m; ++i) {
        string line;
        getline(cin, line);
        stringstream ss(line);
 
        int l, r;
        ss >> l >> r;
 
        ll val;
        if (ss >> val) {
            tree.update(l, r, val);
        } else {
            cout << tree.query(l, r) << "
";
        }
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