#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tcase ; 
    cin>>tcase ; 
    while(tcase--){
        int n , k ; 
        cin>>n>>k ;
        //n is no of people
        vector<int> v(n) ; 
        for(int i=0 ;i<n ; i++){
            cin>>v[i] ;
        }
        //Code
        int gold = 0 ; 
        int count = 0 ;
        for(int i=0 ; i<n ; i++){
            if(v[i]>=k){
                gold+=v[i] ;
            }
            else if(v[i]==0 && gold>=1){
                gold-- ; 
                v[i]++ ;
                count++ ;
            }
        }
        cout<<count<<endl;
    }
}