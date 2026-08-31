#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long x,n;
		cin>>x>>n;
		long long ans;
		if(x%2 ==0 ){
			if((n-1) % 4 == 0) ans=-1*n;
			else if((n-2) % 4 == 0) ans=1;
			else if((n-3) % 4 == 0) ans=n+1;
			else ans=0;	
			cout<<x+ans<<endl;
		}
		else{
			if((n-1) % 4 == 0) ans=n+1;
			else if((n-2) % 4 == 0) ans=0;
			else if((n-3) % 4 == 0) ans=-1*n;
			else ans=1;	
			cout<<x+ans-1<<endl;
		}
		
	}
}
 