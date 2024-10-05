#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a[k],sum=0;

        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        sort (a,a+k);

        for(int i=0;i<k;i++){
            if(sum>=n){
                cout<<sum<<endl;
                break;
            }
            else{
                sum=sum+((a[i] * 2) - 1);
            }
        }
        //cout<<sum<<endl;
    }
    return 0;
}