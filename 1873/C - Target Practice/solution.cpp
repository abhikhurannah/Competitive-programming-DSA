#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	   vector<vector<int>>v;
	   for(int i=0;i<10;i++){
	   	for(int j=0;j<10;j++){
	   		char ch;
	   		cin>>ch;
	   		if(ch=='X') {
	   			if(i<5){
	   				if(j<5) v.push_back({i,j});
	   				else v.push_back({i,9-j});
	   			}
	   			else{
	   				if(j<5) v.push_back({9-i,j});
	   				else v.push_back({9-i,9-j});
	   			}
	   		}
	   	}
	   }
	   int ans=0;
	   for(int i=0;i<v.size();i++){
	   	 if(v[i][1]==0 || v[i][0]==0) ans+=1;
	   	 else if(v[i][1]==1 || v[i][0]==1) ans+=2;
	   	 else if(v[i][1]==2 || v[i][0]==2) ans+=3;
	   	 else if(v[i][1]==3 || v[i][0]==3) ans+=4;
	   	 else ans+=5;
	   }
	   cout<<ans<<endl;
	   
	}
}