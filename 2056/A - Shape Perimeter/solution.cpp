#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int xsum=0;
        int ysum=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(i==0) continue;
            else{
                xsum+=x;
                ysum+=y;
            }
        }
        int p =2*(xsum+ysum) +4*m;
        cout<<p<<endl;
    }
 
    return 0;
}