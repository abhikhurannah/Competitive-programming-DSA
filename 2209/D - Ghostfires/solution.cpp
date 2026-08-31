#include <iostream>
 
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long cnt[3];
        scanf("%lld %lld %lld", &cnt[0], &cnt[1], &cnt[2]);
        
        string res;
        res.reserve(cnt[0] + cnt[1] + cnt[2]);
        
        while(true){
            int sz = (int)res.size();
            int f1     = (sz >= 1) ? (res[sz-1]=='R'?0:res[sz-1]=='G'?1:2) : -1;
            int f2     = (sz >= 3) ? (res[sz-3]=='R'?0:res[sz-3]=='G'?1:2) : -1;
            int prefer = (sz >= 2) ? (res[sz-2]=='R'?0:res[sz-2]=='G'?1:2) : -1;
            
            int best = -1;
            long long bestVal = 0;
            for(int c = 0; c < 3; c++){
                if(c == f1 || c == f2) continue;
                if(cnt[c] <= 0) continue;
                if(cnt[c] > bestVal || (cnt[c] == bestVal && c == prefer)){
                    bestVal = cnt[c];
                    best = c;
                }
            }
            if(best == -1) break;
            
            res += "RGB"[best];
            cnt[best]--;
        }
        
        printf("%s
", res.c_str());
    }
    return 0;
}