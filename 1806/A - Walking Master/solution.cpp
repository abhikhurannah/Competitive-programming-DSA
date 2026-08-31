#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		if(d<b) cout<<-1<<endl;
		else{
			long long y=(d-b);
			a+=y;
			b+=y;
			if(c>a) cout<<-1<<endl;
			else{
				long long x=a-c;
				cout<<x+y<<endl;
			}
		}
	}
	
}