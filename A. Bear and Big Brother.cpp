#include<iostream>
using namespace std;
 
int main()
{
    int n,a,b,num=0;
    cin>>a>>b;
    while(b>=a){
            a*=3;
            b*=2;
            num +=1;
    }
    cout<<num<<endl;
    return 0;
}
