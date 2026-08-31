#include <bits/stdc++.h>
using namespace std;
 
// Function to repeatedly remove "33" from a string
string remove33(string s) {
    while (s.find("33") != string::npos) {
        size_t pos = s.find("33");
        s = s.substr(0, pos) + s.substr(pos + 2);
    }
    return s;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
 
        if (x % 33 == 0) {
            cout << "yes" << endl;
            continue;
        }
 
        string s = to_string(x);
        bool possible = false;
 
        while (x > 0) {
            s = remove33(s); // Remove all "33" pairs
            x = s.empty() ? 0 : stoi(s); // Convert back to an integer
            if (x % 33 == 0) {
                possible = true;
                break;
            }
            x -= 33; // Subtract 33
            s = to_string(x);
        }
 
        if (possible) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
 
    return 0;
}