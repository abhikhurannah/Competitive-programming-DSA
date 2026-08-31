#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   unordered_map<int,int>mp;
	   int maxi=INT_MIN;
	   for(int i=0;i<n;i++){
		   	int x;
		   	cin>>x;
		   	mp[x]++;
		   	maxi=max(maxi,x);
	   }
	   if(mp.size()==1) cout<<-1;
	   else{
	   	  int maxifreq=mp[maxi];
	   	  cout<<(n-maxifreq)<<" "<<maxifreq<<endl;
	   	  for(auto ele :mp){
	   	  	 if(ele.first!=maxi){
	   	  	 	for(int i=0;i<ele.second;i++){
	   	  	 		cout<<ele.first<<" ";
	   	  	 	}
	   	  	 }
	   	  }
	   	  cout<<endl;
	   	  int freq=mp[maxi];
	   	  for(int i=0;i<freq;i++){
	   	  	cout<<maxi<<" ";
	   	  }
	   }
	   cout<<endl;
	}
}