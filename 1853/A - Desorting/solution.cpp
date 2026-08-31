#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   vector<long long>v;
	   for(int i=0;i<n;i++){
	   	 int x;
	   	 cin>>x;
	   	 v.push_back(x);
	   }
	   long long mini=INT_MAX;
	   for(int i=1;i<n;i++){
		   	if(v[i-1]>v[i]){
		   		mini=-2;
		   		break;
		   	}
		   	mini=min(mini,v[i]-v[i-1]);
	   }
	   cout<<((mini/2)+1)<<endl;
	   
	}
}