#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool flag=false;
		int count=0;
		for(int i=0;i<=n-3;i++){
			if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){ 
				flag=true;
				break;
			}
		}
		if(!flag){
			for(int i=0;i<n;i++){
				if(s[i]=='.') count++;
			}
			cout<<count<<endl;
		}
		if(flag) cout<<2<<endl;
	} 
	return 0;
}