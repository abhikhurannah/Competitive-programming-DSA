#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	 long long n, k;
        cin >> n >> k;
        vector<long long>v(n*k);
        for(long long i=0;i<n*k;i++){
        	cin>>v[i];
        }
        long long sum=0;
        long long idx=n*k;
        for(long long i=0;i<k;i++){
        	idx-=(n/2 +1);
        	sum+=v[idx];
        }
        cout<<sum<<endl;
    }
    return 0;
}