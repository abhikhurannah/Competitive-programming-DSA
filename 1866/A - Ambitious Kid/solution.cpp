#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	int mini=INT_MAX;
	while(t--){
	   int x;
	   cin>>x;
	   x=abs(x);
	   mini=min(mini,x);
	}
	cout<<mini<<endl;
}