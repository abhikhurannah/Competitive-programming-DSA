#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long a,b,g;
		cin>>a>>b;
		g=abs(a-b);
		long long mini=min(a,b);
		if(g!=0) cout<<g<<" "<<min(mini%g , g-(mini%g))<<endl;
		else cout<<0<<" "<<0<<endl;
	}
}