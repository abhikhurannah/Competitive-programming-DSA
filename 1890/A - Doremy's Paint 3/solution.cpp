#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unordered_map<int,int>mp;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			mp[x]++;
		}
		if(mp.size()>2) cout<<"NO"<<endl;
		else{
			if(mp.size()==1)cout<<"YES"<<endl;
			else{
				int freq1=0;int freq2=0;
				bool flag=false;
				for(auto ele :mp){
					if(flag){
						 freq1=ele.second;
						 flag=false;
					}
					else {
						freq2=ele.second;
						flag=true;
					}
				}
				if(abs(freq1-freq2)<=1)cout<<"YES"<<endl;
				else  cout<<"NO"<<endl;
			}
		}
	}
}