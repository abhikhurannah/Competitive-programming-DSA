#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x==0){
				v.push_back(i);
			}	
		}
		int count=v.size();
		if(count==0) cout<<1<<endl;
		else if(count == n) cout<<0<<endl;
		else{
			int op=0;
			for(int i=1;i<count;i++){
				if(v[i]-v[i-1]>1) op++;
		    }
		    if(v[0]!=0) op++;
		    if(v[count-1]!=n-1) op++;
		    if(op>2)op=2;
		    cout<<op<<endl;
		}
	}
}