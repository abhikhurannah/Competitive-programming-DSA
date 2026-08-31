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
		int maxg=1,maxl=1;
		int len=1,len1=1,len2=1;
		for(int i=0;i<n-1;i++){
			if(s[i]=='>' && s[i]==s[i+1]) maxg++;
			else if(s[i]=='<' && s[i]==s[i+1]) maxl++;
			else if(s[i]=='>' && s[i]!=s[i+1]) maxg=1;
			else if(s[i]=='<' && s[i]!=s[i+1]) maxl=1;
		    len1=max(maxg,len1);
		    len2=max(maxl,len2);
		}
		len=max(len1,len2);
		cout<<len+1<<endl;
	}
}
 