#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	    int mini=INT_MAX;
	    int mindex=0;
	    for(int i=0;i<n;i++){
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
	    	if(mini>x){
	    		mini=x;
	    		mindex=i;
	    	}
	    }
        bool flag=false;
	    if(v[0]==mini) flag=true;
	    if(flag) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	    
	} 
	return 0;
}