#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long x;
		cin>>x;
		if(x<4 || x%2==1) cout<<-1<<endl;
		else{
			long long mini=ceil(x*1.0/6);
			long long maxi=x/4;
			cout<<mini<<" "<<maxi<<endl;
		}
	}
}