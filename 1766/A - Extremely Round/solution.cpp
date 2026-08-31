#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n<=9) cout<<n<<endl;
		else if(n<=99) cout<<(n/10)+9<<endl;
		else if(n<=999) cout<<(n/100)+18<<endl;
		else if(n<=9999) cout<<(n/1000)+27<<endl;
		else if(n<=99999) cout<<(n/10000)+36<<endl;
		else cout<<(n/100000)+45<<endl;
		
		
	}
}