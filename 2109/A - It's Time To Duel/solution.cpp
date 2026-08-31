#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T; 
    cin >> T;
    while(T--){
       int n;
       cin>>n;
       vector<int>v(n);
       int zeros=0,ones=0;
       for(int i=0;i<n;i++){
       	  cin>>v[i];
       	  if(v[i]==0) zeros++;
       	  else ones++;
       }
       if(zeros ==0 || ones==0){
       	 cout<<"YES"<<endl;
       }else{
       	bool flag=false;
       	for(int i=0;i<n-1;i++){
       		if(v[i]==0 && v[i] == v[i+1]){
       			cout<<"YES"<<endl;
       			flag=true;
       			break;
       		}
       	}
       	if(!flag) cout<<"NO"<<endl;
       }
    }
    return 0;
}