#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k,p;
		cin>>n>>k>>p;
		k=abs(k);
		p=abs(p);
		int num;
		if(k%p!=0) num=(k/p) +1;
		else num=k/p;
		if(num<=n) cout<<num<<endl;
		else cout<<-1<<endl;
	
	}
}