#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long a,b,n;
		cin>>a>>b>>n;
		long long sum=b;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			sum+= min(a-1,x);
		}
		long long total = sum;
		cout<<total<<endl;
		
		
	}
}