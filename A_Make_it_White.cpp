#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,c=0,f=0;
		cin>>n;

		string s;
		cin>>s;

		for(int i=0;i<s.size();i++){
			if(s[i]=='B'){
				c=i;
				break;
			}
		}
		for(int i=0;i,s.size();i++){
			if(s[(n-1)-i]=='B'){
				f=i;
				break;
			}
		}
		cout<<n-(c+f)<<endl;
	}

	return 0;
}