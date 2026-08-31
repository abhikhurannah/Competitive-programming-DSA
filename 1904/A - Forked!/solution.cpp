#include <iostream>
#include <unordered_set>
using namespace std;
 
#define ll long long
 
// Custom hash function for pair
struct pair_hash {
    template <class T, class U>
    size_t operator()(const pair<T, U>& p) const {
        return hash<T>()(p.first) ^ (hash<U>()(p.second) << 1);
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        
        int dx[4] = {-1, 1, 1, -1};
        int dy[4] = {1, 1, -1, -1};
        
        // Use the custom hash for pairs
        unordered_set<pair<ll, ll>, pair_hash> st,st1;
        
        for (int i = 0; i < 4; i++) {
            ll p1_x = xk + (dx[i] * a);
            ll p1_y = yk + (dy[i] * b);
            ll p2_x = xk + (dx[i] * b);
            ll p2_y = yk + (dy[i] * a);
            
            ll p3_x = xq + (dx[i] * a);
            ll p3_y = yq + (dy[i] * b);
            ll p4_x = xq + (dx[i] * b);
            ll p4_y = yq + (dy[i] * a);
            
            st.insert({p1_x, p1_y});
            st.insert({p2_x, p2_y});
            st1.insert({p3_x, p3_y});
            st1.insert({p4_x, p4_y});
        }
        int cnt=0;
        for(auto it : st){
        	if(st1.find(it)!=st1.end()) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}