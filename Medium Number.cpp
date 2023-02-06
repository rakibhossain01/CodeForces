#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a<b && b<c)
        {
            cout<<b<<endl;
        }
        else if(c<b && b<a)
        {
            cout<<b<<endl;
        }
        else if(b<c && c<a)
        {
            cout<<c<<endl;
        }
        else if(a<c && c<b)
        {
            cout<<c<<endl;
        }
        else if(b<a && a<c)
        {
            cout<<a<<endl;
        }
        else if(c<a && a<b)
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
