#include <iostream>
#include <vector>
#include <numeric> // For gcd
using namespace std;
 
 
 
int main() {
    int t; // Number of test cases
    cin >> t;
 
    while (t--) {
        long long l, r;
        cin >> l >> r;
        if(l==r){
            if(l==1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else{
            cout<<r-l<<endl;
        }
    }
 
 
    return 0;
}