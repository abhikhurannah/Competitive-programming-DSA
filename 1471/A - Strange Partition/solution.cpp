#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	 long long n, x;
        cin >> n >> x;
 
        long long sum = 0, sum1 = 0;
        for (long long i = 0; i < n; ++i) {
            long long xi;
            cin >> xi;
            sum  += xi;
            sum1 += (xi + x - 1) / x;        // integer ceil
        }
 
        long long totalBatches = (sum + x - 1) / x;
        cout << totalBatches << " " << sum1 << "
";
    }
    return 0;
}