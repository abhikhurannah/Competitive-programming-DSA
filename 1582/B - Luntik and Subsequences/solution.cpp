#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long zeros=0,ones=0;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			if(x==0) zeros++;
			if(x==1) ones++;
		}
		if(ones == 0) {
			cout<<0<<endl;
		}else{
			if(zeros ==0){
				cout<<ones<<endl;
			}
			else{
				long long ans=pow(2,zeros)*ones;
				cout<<ans<<endl;
			}
			
		}
	}
}