#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int nsum=0;
	   int psum=0;
	   for(int i=0;i<n-1;i++){
	   	  int x;
	   	  cin>>x;
	   	  if(x<0) nsum+=x;
	   	  else psum+=x;
	   }
	   cout<<(-1*(nsum+psum))<<endl;
	}
}