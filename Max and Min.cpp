#include<iostream>
using namespace std;

int main()
{
    int a,b,c,s,t,x,y;
    cin>>a>>b>>c;

    s = min(a,b);
    t = min(s,c);
    cout<<t<<" ";

    x = max(a,b);
    y = max(x,c);
    cout<<y<<endl;

    return 0;
}
