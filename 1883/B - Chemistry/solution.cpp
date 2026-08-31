#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int>v(26,0);
		for(int i=0;i<n;i++){
			int ch = s[i];
			v[ch-'a']++;
		}
		int odd_counts=0;
		
		for(int i=0;i<26;i++){
			if(v[i]%2!=0) odd_counts++;
		}
		
		if(odd_counts > k+1) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
		
	}
}