// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
         int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
 
        int maxFibo = 0;
        int a3=-100;
        while(a3<=100) {
            int count = 0;
            if (a3 == a1 + a2) count++;
            if (a4 == a2 + a3) count++;
            if (a5 == a3 + a4) count++;
 
            maxFibo = max(maxFibo, count);
            a3++;
        }
        cout << maxFibo << endl;
    }
}