#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
 
        int l = 0, r = n - 1;
        string s="";
		bool turn =false;
        for (int mv = 0; mv < n; mv++) {
            int left = p[l];
            int right = p[r];
            if (turn) {
                if (left < right) {
                    s += 'L';
                    l++;
                } else {
                    s += 'R';
                    r--;
                }
            } else {
                if (left > right) {
                    s += 'L';
                    l++;
                } else {
                    s += 'R';
                    r--;
                }
            }
            turn = !turn;
        }
 
        cout<<s<<endl;
    }
    return 0;
} 