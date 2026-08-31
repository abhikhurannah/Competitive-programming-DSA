#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		stack<int>st;
		int i=0;
		int len=0,maxlen=0;
		while(i<n){
			if(st.empty() || abs(st.top()-v[i]) <=k ){
				len++;
			}
			else {
				len=1;
			}
			st.push(v[i]);
			maxlen=max(maxlen,len);
			i++;
		}
		cout<<n-maxlen<<endl;
	}
}
// 2
// 0
// 5
// 0
// 3
// 1
// 4