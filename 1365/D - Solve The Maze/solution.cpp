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
    ll n,m;
    cin >> n >> m;
    vector<string> maze(n);
    for (int i = 0; i < n; ++i) cin >> maze[i];
 
    vector<vector<bool>> visited(n, vector<bool>(m, false));
 
    auto is_valid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < m && maze[x][y] != '#' ;
    };
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
 
    // 1. Trap the Bad Guys by putting walls AROUND them
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(maze[i][j] == 'B'){
                for(int k = 0; k < 4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    // Only replace empty spaces with walls
                    if(is_valid(nx, ny) && maze[nx][ny] == '.') {
                        maze[nx][ny] = '#';
                    }
                }
            }
        }
    }
 
    auto f = [&](auto &&self ,int i, int j) -> void {
        visited[i][j] = true;
        for(int k=0;k<4;k++){
            int x = i + dx[k];
            int y = j + dy[k];
            if(is_valid(x,y) && !visited[x][y]){
                self(self, x , y);
            }
        }
    };
 
    // 2. Only run the DFS if the exit itself isn't blocked by a wall
    if(is_valid(n-1, m-1)) f(f, n-1, m-1);
 
    // 3. Verify the final board state
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maze[i][j] == 'G' && !visited[i][j]){
                cout << "No
";
                return;
            }
            if(maze[i][j] == 'B' && visited[i][j]){
                cout << "No
";
                return;
            }
        }
    }
    cout << "Yes
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