#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		vector<long long>A(n),B(n);
		vector<pair<long long,long long>>v(n);
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++){
			cin>>B[i];
		}
		for(int i=0;i<n;i++){
			v[i]= {B[i],A[i]};
		}
		sort(v.begin(),v.end());
		long long min_cost=p;
		long long shared=1;
		for(auto it : v){
			long long can_be_shared = it.second;
			long long sharing_cost = it.first;
			
			if(sharing_cost>=p) break;
			if(shared + can_be_shared >n){
				min_cost += (n-shared) * sharing_cost;
				shared = n;
				break;
			}else{
				min_cost += can_be_shared * sharing_cost;
				shared +=can_be_shared ;
			}
		}
		min_cost+=(n-shared)*p;
		cout<<min_cost<<endl;
	}
	return 0;
}