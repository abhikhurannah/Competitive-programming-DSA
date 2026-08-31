#include <bits/stdc++.h>
using namespace std;
bool issquare(long long num) {
    long long root = sqrt(num);  // Compute square root
    return root * root == num;   // Check if it's a perfect square
}
int main() {
	int t;
	cin>>t;
	while(t--){
		long long k;
		cin>>k;
		long long sum=0;
		priority_queue<long long>p;
		for(long long i=1;i<=k;i++){
			p.push(i);
			sum+=i;
		}
		if(issquare(sum)){
			cout<<-1<<endl;
		}
		else{
			sum=0;
			for(long long i=1;i<=k;i++){
				sum+=p.top();
				if(issquare(sum)){
					sum-=p.top();
					long long ele=p.top();
					p.pop();
					if(p.size()==0) cout<<-1;
					else{
						sum+=p.top();
						cout<<p.top()<<" ";
						p.pop();
						p.push(ele);
					}
				}else{
					cout<<p.top()<<" ";
					p.pop();
				}
			}
			cout<<endl;
		}
	}
}