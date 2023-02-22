#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,s,t,a,b,c;
    cin>>x>>y>>z;

    a = abs(x-y) + abs(x-z);
    b = abs(y-x) + abs(y-z);
    c = abs(z-x) + abs(z-y);

    s = min(a,b);
    t = min(s,c);

    cout<<t<<endl;

    return 0;
}
