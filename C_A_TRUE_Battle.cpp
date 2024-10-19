#include <bits/stdc++.h>
using namespace std;

bool alice_wins(const string& s) {
    if (s[0] == '1' || s[s.length() - 1] == '1') {
        return true;
    }
    
    for (size_t i = 0; i < s.length() - 1; ++i) {
        if (s[i] == '1' && s[i+1] == '1') {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<string> vec(t);
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; 
        cin >> vec[i]; 
    }
    
    for (int i = 0; i < t; i++) {
        if (alice_wins(vec[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}