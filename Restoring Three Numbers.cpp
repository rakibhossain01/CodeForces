#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,x[4];

    for(i=0; i<4; i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);

    c = x[3] - x[0];
    b = x[2] - c;
    a = x[3] - (b+c);

    cout<<a<<" "<<b<<" "<<c<<endl;
}
