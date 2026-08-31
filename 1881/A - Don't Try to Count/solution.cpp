#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string x,s;
		cin>>x;
		cin>>s;
		int op=0;
		while(true){
			if(x.length()<=s.length()){
				if(x.length()==s.length()){
					if(x.find(s) != string::npos) break;
					else{
						x+=x;
				     	op++;
					}
				}
				else{
					x+=x;
					op++;
				}
			}
			else{
				if(x.find(s) != string::npos) break;
				else{
					x+=x;
					op++;
					if(x.find(s) != string::npos) break;
					else{
						op=-1;
						break;
					}
				}
			}
		}
		cout<<op<<endl;
	}
}