#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,a,s=0,k=0;
		float b=9;
		cin>>n>>a>>b;

		if(2*a < b){
			cout<<a*n<<endl;
		}
		else{
			s = n/2;
			k = n%2;

			cout<<b*s+a*k<<endl;
		}
	}

	return 0;
}