#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,f;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+' && q=='=')
    {
        f=a+b;
        if(f==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<f<<endl;
        }
    }
    else if(s=='-' && q=='=')
    {
        f=a-b;
        if(f==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<f<<endl;
        }
    }
    else if(s=='*' && q=='=')
    {
        f=a*b;
        if(f==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<f<<endl;
        }
    }
    return 0;
}
