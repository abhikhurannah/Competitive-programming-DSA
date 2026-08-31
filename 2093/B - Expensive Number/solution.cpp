#include <bits/stdc++.h>
using namespace std;
 
int main() {
	 int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int maxSubseq = 0; 
        int zeroCount = 0;
        for (int i = 0; i < n; i++){
            if(s[i] == '0'){
                zeroCount++;
            } else { 
                int currentCandidate = zeroCount + 1;
                if(currentCandidate > maxSubseq)
                    maxSubseq = currentCandidate;
            }
        }
        int ans = n - maxSubseq;
        cout <<ans<< endl;
    }
    
}