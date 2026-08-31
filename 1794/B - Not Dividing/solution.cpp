#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>v(n);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x==1) v[i]=2;
			else v[i]=x;
		}
		for(int i=1;i<n;i++){
			if(v[i]% v[i-1] ==0){
				v[i]++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		
	}
}