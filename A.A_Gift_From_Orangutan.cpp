#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,sum=0;;
		cin>>n;

		int a[n];
		int min = INT_MAX;
		int max = INT_MIN;

		for(int i=0;i<n;i++){
			cin>>a[i];

			if(min>a[i]){
				min=a[i];
			}
			if(max<a[i]){
				max = a[i];
			}
		}
		for(int i=1;i<n;i++){
			sum+=max - min;
		}
		cout<<sum<<endl;

	}

	return 0;
}