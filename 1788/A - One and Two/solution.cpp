#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>v;
		long long one=0;
		long long two=0;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			v.push_back(x);
			if(x==2) two++;
			else one++;
		}
		if(two%2!=0) cout<<-1<<endl;
		else if(two==0) cout<<1<<endl;
		else{
			long long neededtwo=two/2;
			long long idx=-1,currenttwo=0;
			for(int i=0;i<n;i++){
				if(v[i]==2){
					currenttwo++;
					if(currenttwo==neededtwo){
						idx=i;
						break;
					}
				}
			}
			if(idx==-1) cout<<-1<<endl;
			else cout<<idx+1<<endl;
		}
	}
	
}