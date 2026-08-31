#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unordered_map<int,int>m;
		unordered_map<int,int>mn;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			m[x]++;
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			mn[x]++;
		}
		bool flag=false;
		if(m.size()+ mn.size()>=4) flag=true;
		 if(flag==true){
		 	cout<<"YES"<<endl;
		 }
		 else cout<<"NO"<<endl;
		
	}
 
    return 0;
}