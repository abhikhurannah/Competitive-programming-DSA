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
#define minheap_i priority_queue<int, vector<int>, greater<int>>
#define maxheap_i priority_queue<int>
#define minheap_pii priority_queue<pii, vector<pii>, greater<pii>>
#define maxheap_pii priority_queue<pii>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define umap_ii unordered_map<int, int>
#define umap_ll unordered_map<ll, ll>
void print(vector<int> &arr){for(int ele : arr){cout<<ele<<" ";} cout<<endl;}
 
 
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
 
 
struct Cmp {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        if (a.first != b.first)
            return a.first < b.first;   // max-heap on .first
        return a.second > b.second;     // min-heap on .second
    }
};
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
     priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   Cmp> pq;
    for(int i=0;i<n;i++){
    	v[i]=v[i]%k;
    	if(v[i]==0) v[i]=k;
		pq.push({v[i],i+1});
    }
    vector<int>ans;
    while(!pq.empty()){
    	 int top = pq.top().first;
    	 int idx = pq.top().second;
    	 pq.pop();
    	 ans.push_back(idx);
    }
    print(ans);
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