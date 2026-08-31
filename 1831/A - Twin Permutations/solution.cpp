#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>v;
		long long maxi=LLONG_MIN;
		long long mini=LLONG_MAX;
		
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			v.push_back(x);
			maxi=max(maxi,x);
			mini=min(mini,x);
		}
		long long sum=maxi+mini;
		for(int i=0;i<n;i++){
			cout<<abs(sum-v[i])<<" ";
		}
		
		cout<<endl;
		
	}
	
}