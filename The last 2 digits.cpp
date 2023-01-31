#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,s,t;
    cin>>a>>b>>c>>d;

    a%=100;
    b%=100;
    c%=100;
    d%=100;

    t=a*b*c*d;

    if(t%100<=9)cout<<0;

    cout<<t%100<<endl;
    return 0;
}
