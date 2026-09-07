class Solution {
public:
    int mod = 1e9+7;
    int distinctSubseqII(string s) {
        int n = s.length();
        vector<int>dp(n+1,0);
        vector<int>last(26,-1);
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            dp[i] = (2*dp[i-1]) % mod ;
            if(last[s[i-1]-'a'] != -1){
                dp[i] = (dp[i] - dp[last[s[i-1]-'a']] + mod) % mod;
            }
            last[s[i-1]-'a'] = i-1;
        }
        return (dp[n]-1+mod)% mod;
    }
};