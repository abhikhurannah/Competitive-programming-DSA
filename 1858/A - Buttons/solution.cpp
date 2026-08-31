#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	   long long a,b,c;
	   cin>>a>>b>>c;
	   if(c%2!=0) a=a+1;
	   if(a>b) cout<<"First"<<endl;
	   else cout<<"Second"<<endl;
	   
	}
}