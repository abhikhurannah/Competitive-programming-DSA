#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long ans=-1;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			if(ans==-1) ans=x;
			ans=ans&x;
			
		}
		cout<<ans<<endl;
	}
}