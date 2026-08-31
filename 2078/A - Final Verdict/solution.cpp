#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		long long sum=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum+=x;
			
		}
		if(sum%(x*n)==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}