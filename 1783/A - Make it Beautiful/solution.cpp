#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long op=0;
		vector<long long>v;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end(),greater<>());
		if(v[0]==v[n-1]) cout<<"No";
		else{
			swap(v[1],v[n-1]);
			cout<<"Yes"<<endl;
			for(int i=0;i<n;i++){
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
	}
}