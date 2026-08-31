#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		long long d1=b-a,d2=c-b;
		if(d1 ==d2) cout<<"YES"<<endl;
		else{
			if(((2*b) -c)% a ==0 && (((2*b) -c)/ a )>0 ) cout<<"YES"<<endl;
			else if((a+c)% (2*b) ==0 && ((a+c)/ (2*b) )>0 ) cout<<"YES"<<endl;
			else if(((2*b)-a) %c ==0 && (((2*b)-a) /c)>0 ) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		
	}
}