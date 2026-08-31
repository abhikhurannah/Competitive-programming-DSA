#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		int mini=INT_MAX,maxi=INT_MIN,even=0;
		for(int i=0;i<n;i++){
			if(v[i]%2==0) even++;
			v[i]=v[i]%k;
			mini=min(mini,v[i]);
			maxi=max(maxi,v[i]);
		}
		if(mini ==0 ) cout<<mini<<endl;
		else if(k==4){
			if(even>=2) maxi=min(0,k-maxi);
			else if(even ==1) maxi=min(1,k-maxi);
			else maxi=min(2,k-maxi);
			cout<<maxi<<endl;
		}
		else cout<<k-maxi<<endl;
		
	}
}
// 2
// 2
// 1
// 0
// 2
// 0
// 1
// 2
// 0
// 1
// 1
// 4
// 0
// 4
// 3