#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,diff;
        cin>>a>>b;

        diff = a - b;

        if(diff==0){
            cout<<0<<endl;
        }
        else if(diff>0){
            if(diff%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            if(diff%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}
