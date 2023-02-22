#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np ;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a,b,r;
    a = ((k*l)/nl)/n;
    b = (c * d )/n;
    r =( p/np)/n ;

    int s,t;
    s = min(a,b);
    t = min(s,r);

    cout<<t<<endl;
}
