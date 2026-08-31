#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long op=0;
		vector<long long>v;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n-1;i++){
			if(v[i]%2 == v[i+1]%2) op++;
		}
		cout<<op<<endl;
		
		
	}
}