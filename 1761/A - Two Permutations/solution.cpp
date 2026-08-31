#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n,a,b;
		cin>>n>>a>>b;
		if(a==b && b==n) cout<<"Yes"<<endl;
		else if((n-(a+b))>=2)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
	}
}