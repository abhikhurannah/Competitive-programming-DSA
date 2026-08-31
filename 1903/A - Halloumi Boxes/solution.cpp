#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<long long>v;
		bool flag=true;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			if(i>0){
				if(v.back()>x) flag=false;
			}
			v.push_back(x);
		}
		if(flag==true) cout<<"YES"<<endl;
		else if(k>1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	return 0;
}