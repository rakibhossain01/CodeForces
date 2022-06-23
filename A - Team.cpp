#include<iostream>
using namespace std;
 
int main()
{
    int n,p,v,t,num=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>v>>t;
        if(p+v+t >=2){
            num += 1;
        }
    }
    cout<<num<<endl;
    return 0;
}
