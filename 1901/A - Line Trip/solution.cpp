#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<long long>v;
		long long maxdis=0;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			v.push_back(x);
		}
		long long dis=0;
		for(int i=0;i<n;i++){
			if(i==0) dis=v[i];
			else dis=v[i]-v[i-1];
			maxdis=max(maxdis,dis);
		}
		dis=2*(x-v[n-1]);
		maxdis=max(maxdis,dis);
		cout<<maxdis<<endl;
	}
	return 0;
}