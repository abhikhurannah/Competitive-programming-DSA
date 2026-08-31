#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long x;
		cin>>x;
		if(x==1){
			cout<<0<<endl;
			continue;
		}
		long long two=0,three=0;
		long long num=x;
        while(num>1 && num%3 ==0 ){
        	num/=3;
        	three++;
        }
        while(num>1 && num%2 ==0 ){
        	num/=2;
        	two++;
        }
        if(num !=1 || two>three ) cout<<-1<<endl;
        else{
        	cout<<(2*three - two)<<endl;
        }
        
    }
    return 0;
}