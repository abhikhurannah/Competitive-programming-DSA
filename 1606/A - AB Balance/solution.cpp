#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		if(s[0] == s[n-1]){
			cout<<s<<endl;
		}else{
			s[n-1]=s[0];
			cout<<s<<endl;
		}
	}
}