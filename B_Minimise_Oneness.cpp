#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n ; 
    cin >> n; 

    string s="1";
    for(int i=0;i<n-1;i++){
       s+="0";
    }
    cout << s << endl; 

}
int main() {
    int t; 
    cin>> t; 

    while(t--){
        solve(); 
    }

    return 0; 
}