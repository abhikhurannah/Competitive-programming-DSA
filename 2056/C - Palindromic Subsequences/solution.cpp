// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>v(n,-2);
             v[0]=v[n-1]=v[2]=1;
            int count=2;
            int i=0;
            while(i<n){
                if(v[i]==-2){
                    v[i]= count;
                    count++;
                }
                i++;
           }
       
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}