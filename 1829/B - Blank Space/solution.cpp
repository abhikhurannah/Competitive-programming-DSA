#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>v;
		long long maxi=0;
		long long idx=-1;
		long long idx1=-1;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			if(x==1){
				idx1=i;
			    maxi=max(maxi,(idx1-idx-1));
			    idx=idx1;
			}
		}
		 maxi=max(maxi,(n-idx-1));
		
		cout<<maxi<<endl;
		
	}
	
}