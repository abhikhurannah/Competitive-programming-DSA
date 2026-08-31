#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string s;
		cin>>s;
		int i=0;
		int j=n-1;
		while(i<j){
			if(s[i]==s[j]) break;
			i++;j--;
		}
		cout<<(j-i+1)<<endl;
	}
	
}