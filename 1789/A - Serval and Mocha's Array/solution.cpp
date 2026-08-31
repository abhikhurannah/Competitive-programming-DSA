#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		bool flag=true;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(__gcd(v[i],v[j]) <= 2) flag=false;
			}
		}
		if(flag) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
	