#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int one=0;
		int minusone=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x==1) one++;
			else minusone++;
		}
		if(one>=minusone){
			if(minusone %2==0) cout<<0<<endl;
			else cout<<1<<endl;
		}else{
			int op=0;
			while(minusone>one){
				minusone--;
				one++;op++;
			}
			if(minusone %2==1) op++;
			cout<<op<<endl;
		}
	}}