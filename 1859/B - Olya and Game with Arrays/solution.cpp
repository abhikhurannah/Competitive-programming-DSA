#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define mpr make_pair
#define endl "
"
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define umap_ii unordered_map<int, int>
#define umap_ll unordered_map<ll, ll>
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
 
void solve() {
    int n;
    cin >> n;
    vector<vector<int>> v(n);
 
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        while (size--) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        sort(v[i].begin(), v[i].end());
    }
 
    ll sum_s_min = 0;
    ll s_min_ele = LLINF;
    ll mini = LLINF;
 
    for (int i = 0; i < n; i++) {
        sum_s_min += v[i][1];
        s_min_ele = min(s_min_ele, 1LL * v[i][1]);
        mini = min(mini, 1LL * v[i][0]);
    }
 
    cout << sum_s_min + mini - s_min_ele << endl;
}
 
int main() {
    fast_io;
 
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
 
    return 0;
}