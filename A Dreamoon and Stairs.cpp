#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x;
	cin>>n>>m;

	if(n%2==0){
		x = n/2;
	}
	else{
		x = n/2 +1;
	}
	for(int i=x;i<=n;i++){
		if(i%m==0){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
