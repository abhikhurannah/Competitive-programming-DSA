#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
        cin >> n;
        vector<int>v(n);
        int idx=-1;
        for(int i=0;i<n;i++){
        	cin>>v[i];
        }
        for(int i=1;i<n-1;i++){
        	if(v[i-1]<v[i] && v[i]>v[i+1]){
        		idx=i;
        		break;
        	}
        }
        if(idx==-1) cout<<"NO"<<endl;
        else{
        	 cout<<"YES"<<endl;
        	cout<<idx<<" "<<idx+1<<" "<<idx+2<<endl;
        }
        
    }
    return 0;
}