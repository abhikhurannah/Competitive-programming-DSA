// https://codeforces.com/contest/2236/problem/E
 
///*    /\_/\
// *   (= ._.)
// *   / >  \>
// */       //
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define ld long double
#define ll long long int
#define all(v) v.begin(),v.end()
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define sp " "
#define nl '
'
#define pb push_back
#define ss second;
 
typedef tree<ll , null_type ,less<ll> , rb_tree_tag , tree_order_statistics_node_update > pbds;
 
ll gcd(ll a, ll b){ if (b == 0)return a ; return gcd(b, a % b); }
void fastIO(){ ios_base::sync_with_stdio(false); cin.tie(NULL); }
void display(vi& v){ int n = v.size() ; rep(i,n) cout<<v[i]<<sp; cout<<nl; }
void displayll(vll& v){ ll n=v.size(); repl(i,n) cout<<v[i]<<sp; cout<<nl; }
 
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll modinv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return (arr[0] + b) % b;} //for non prime b
ll modinvprime(ll a, ll b) {return expo(a, b - 2, b);} // for prime b 
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, modinvprime(b, m), m) + m) % m;}
ll combination(ll n, ll r, ll m, vll& fact, vll& ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll EulerToitent(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
vector<ll> sieve(int n){vector<ll> arr(n+1,0),vect;for(int i=2;i<=n;i++)if(arr[i]==0){vect.push_back(i);for(int j=2*i;j<=n;j+=i)arr[j]=1;}return vect;} // O(n*log(log(n)))
 
/*------------- Standard Templates -------------*/
// Trie 
const int letters = 26 ; 
struct TrieNode{
    vector<int> children ; 
    int strings_ending_here ; 
    int strings_going_below ; 
    TrieNode(){
        children.resize(letters,-1) ; 
        strings_ending_here = 0 ;
        strings_going_below = 0 ; 
    }
};  
 
struct Trie{
    vector<TrieNode> TrieTree ; 
    int sizeOfTrie = 0 ;
    Trie(){
        TrieTree.push_back(TrieNode()) ; 
        sizeOfTrie++ ; 
    }
 
    void add(string word){
        int currNode = 0 ; 
        for(char ch : word){
            int index = ch - 'a' ; 
            if(TrieTree[currNode].children[index] == -1){
                TrieTree[currNode].children[index] = sizeOfTrie ; 
                TrieTree.push_back(TrieNode()) ; 
                sizeOfTrie++ ; 
            }
            currNode = TrieTree[currNode].children[index] ; 
            TrieTree[currNode].strings_going_below++ ; 
        }
        TrieTree[currNode].strings_going_below++ ; 
    }
 
    bool search(string word){
        int currNode = 0 ; 
        for(char ch : word){
            int index = ch - 'a' ; 
            if(TrieTree[currNode].children[index] == -1) return false ; 
            currNode = TrieTree[currNode].children[index] ; 
        }
        return TrieTree[currNode].strings_ending_here > 0 ; 
    }
 
    void deleteWord(string word){
        int currNode = 0 ; 
        if(!search(word)){
            return ; 
        }
        for(char ch : word){
            int index = ch - 'a' ; 
            int child = TrieTree[currNode].children[index] ; 
            TrieTree[child].strings_going_below-- ; 
            if(TrieTree[child].strings_going_below == 0){
                TrieTree[currNode].children[index] = -1 ; 
            }
            currNode = child ; 
        }
 
        TrieTree[currNode].strings_ending_here-- ; 
    }
};
 
// String hashing
class Hashing{
public:
    string s;
    int n;
    int primes;
    vector<ll> hashPrimes = {1000000009, 1000000007};
    const ll base = 31;
    vector<vector<ll>> hashValues;
    vector<vector<ll>> powersOfBase;
 
    Hashing(string a){
        s = a;
        n = s.length();
        primes = hashPrimes.size();
        hashValues.resize(primes, vector<ll>(n + 1, 0));
        powersOfBase.resize(primes, vector<ll>(n + 1, 1));
        for (int i = 0; i < primes; i++) {
            for (int j = 0; j < n; j++) {
                powersOfBase[i][j + 1] = (powersOfBase[i][j] * base) % hashPrimes[i];
                ll charVal = s[j] - 'a' + 1LL;
                hashValues[i][j + 1] = (hashValues[i][j] * base + charVal) % hashPrimes[i];
            }
        }
    }
    vector<ll> substringHash(int l, int r) {
        vector<ll> hash(primes);
        int len = r - l + 1;
        for (int i = 0; i < primes; i++) {
            ll val1 = hashValues[i][r + 1];
            ll val2 = (hashValues[i][l] * powersOfBase[i][len]) % hashPrimes[i];
            hash[i] = (val1 - val2 + hashPrimes[i]) % hashPrimes[i];
        }
        return hash;
    }
};
 
 
const int sz = 6005 ;
 
int dp[sz][sz] ; 
    
void solve(){
    ll n ; cin >> n ; 
    vll v(n) ; repl(i,n) cin >> v[i] ; 
 
    // code
    // ll dp[n+5] = {0} ; 
 
    // dp[v[n-1]] = 1 ; 
 
    // for(int i=1 ; i<n ; i++){
    //     dp[v[i]] = max(dp[v[i]],1+dp[v[i]+1]) ; 
    // }
 
    // /*
    // 1 n
    // n+1 2*n
    // => 
    // */
    // ll ans = 0 ; 
    // for(int i=0 ; i<n ; i++){
    //     ll len = dp[v[i]] ;
    //     ll newStart1 = v[i] + len ; 
    //     ll newStart2 = v[i] - len ; 
    //     if(newStart2<=n &&  dp[newStart2] >= len){
    //         ans = max(ans,len) ; 
    //     }
    //     if(newStart1<=n &&  dp[newStart1] >= len){
    //         ans = max(ans,len) ; 
    //     }
    // }
 
    // cout << ans << nl ; 
    // problem hi glt smjh liya 
    for(int i=0 ; i<n+5 ; i++){
        for(int j=0 ; j<n+5 ; j++){
            dp[i][j] = -1 ; 
        }
    }
 
    for(int i=0 ; i<n ; i++){
        int mn = v[i];
        int mx = v[i];
        vector<bool> vis(n+1, false); 
        
        for(int j=i ; j<n ; j++){
            if(vis[v[j]]) break; 
            vis[v[j]] = true;
            
            mn = min(mn, (int)v[j]);
            mx = max(mx, (int)v[j]);
            
            if(mx - mn == j - i){
                dp[i][j] = mn;
            }
        }
    }
 
    int ans = 0;
    
    for(int len = 1; len <= n / 2; len++){
        vector<int> ending(n + 1, 1e9);
        vector<int> starting(n + 1, -1e9);
        
        for(int i = 0 ; i <= n-len ; i++){
            int j = i + len - 1 ;
            if(dp[i][j] != -1){
                int val = dp[i][j];
                ending[val] = min(ending[val], j);
                starting[val] = max(starting[val], i);
            }
        }
        
        for(int val = 1 ; val<= n- 2*len + 1 ; val++){
            if(ending[val] != 1e9 && ending[val + len] != 1e9){
                if(ending[val] < starting[val + len] || ending[val + len] < starting[val]){
                    ans = max(ans, len);
                }
            }
        }
    }
 
    cout << ans << nl ;
}
 
 
int main(){
    fastIO();
    int t = 1;
    cin >> t ;
    while(t--){
        // memset(dp,-1,sizeof(dp)) ; 
        solve();
    }
}