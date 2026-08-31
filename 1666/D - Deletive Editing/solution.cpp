#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		vector<int>alpha(26,0);
		for(int i=0;i<t.size();i++){
			alpha[t[i]-'A']++;
		}
		for(int i=s.size()-1;i>=0;i--){
			if(alpha[s[i]-'A'] >0) alpha[s[i]-'A']--;
			else s[i]='.';
		}
		string goal="";
		for(int i=0;i<s.size();i++){
			if(s[i]!='.') goal+=s[i];
		}
		
		if(goal == t) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}