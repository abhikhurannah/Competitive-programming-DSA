#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>v(n);
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			v[i]=x;
		}
		long long ans=v[n-1]-v[0];
		for(int i=0;i<n;i++){
			ans=max(ans,v[i]-v[0]);
		}
		for(int i=0;i<n;i++){
			ans=max(ans,v[n-1]-v[i]);
		}
		for(int i=0;i<n-1;i++){
			ans=max(ans,v[i]-v[i+1]);
		}
		
		
		cout<<ans<<endl;
		
	}
}