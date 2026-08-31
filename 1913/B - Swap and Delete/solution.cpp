#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length(),zero=0,one=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0') zero++;
			else one++;
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(s[i] == '0' && one>0) one--;
			else if(s[i] =='1' && zero>0) zero--;
			else {
				ans=n-i;
				break;
			}
		}
		cout<<ans<<endl;
		
	}
}