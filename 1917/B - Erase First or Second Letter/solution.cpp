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
#define umap_ci unordered_map<char,int>
 
 
 
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
 
 
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    umap_ci freq;
    int cnt=0;
    vi distinct(n,0);
    for(int i=0;i<n;i++){
    	freq[s[i]]++;
    	if(freq[s[i]]==1){
    		cnt++;
    	}
    	distinct[i] = cnt;
    }
    ll ans =0;
    for(int i=0;i<n;i++){
    	ans+=distinct[i];
    }
    cout<<ans<<endl;
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc = 1; 
    cin >> tc;
    while (tc--) {
        solve();
    }
 
    return 0;
}