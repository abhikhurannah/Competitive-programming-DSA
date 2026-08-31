#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n,q;
		cin>>n>>q;
		vector<long long>v(n);
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		vector<long long>pre(n+1,0);
		for(int i=1;i<=n;i++){
			pre[i]=pre[i-1]+v[i-1];
		}
		while(q--){
			long long l,r,k;
			cin>>l>>r>>k;
			long long newsum = sum + ((r-l+1)*k) - (pre[r]-pre[l-1]);
			if(newsum% 2 ==0) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
			
			
		}
	}
}