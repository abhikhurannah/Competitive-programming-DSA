#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    vector<string> pat = {"00","25","50","75"};
    int T; 
    cin >> T;
    while(T--){
        string s; 
        cin >> s;
        int n = s.size(), ans = n;
        for(auto &p: pat){
            int i = n-1, j;
            while(i>=0 && s[i]!=p[1]) --i;
            if(i<1) continue;
            j = i-1;
            while(j>=0 && s[j]!=p[0]) --j;
            if(j<0) continue;
            ans = min(ans, (n-1-i) + (i-1-j));
        }
        cout << ans << "
";
    }
    return 0;
}