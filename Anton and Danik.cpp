#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i,num=0,ctr=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if(s[i]=='D'){
            num+=1;
        }
        if(s[i]=='A'){
            ctr+=1;
        }
    }
    if(num>ctr){
        cout<<"Danik"<<endl;
    }
    else if(ctr>num){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}
