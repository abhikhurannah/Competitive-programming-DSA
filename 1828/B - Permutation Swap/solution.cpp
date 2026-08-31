#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
	int t;
	cin>>t;
	while(t--){
    	int g=1;
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(i==1) g=x-i;
			if(x!=i) g=gcd(g,abs(x-i));
		}
		cout<<g<<endl;
	}
}
 