#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,count=0;
		cin>>n;

		string s;
        cin>>s;

		for(int i=0;i<s.size()/2; i++){
			if(s[i]!=s[(n-1)-i]){
				count=count+2;
			}
			else{
				break;
			}
		}
		cout<<n-count<<endl;
	}

	return 0;
}