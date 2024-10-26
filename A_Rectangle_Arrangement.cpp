#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int w[n],h[n],s=0;
		int x = INT_MIN;
		int y = INT_MIN;

		for(int i=0;i<n;i++){
			cin>>w[i]>>h[i];

			x = max(x,w[i]);
			y = max(y,h[i]);
		}
		s =2*(x + y);

		cout<<s<<endl;
	}

	return 0;
}