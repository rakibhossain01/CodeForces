#include<iostream>
using namespace std;

int main()
{
    int a,b,c,s,r,g,h,i;
    cin>>a>>b>>c;

    s=a+(b*c);
    r=a*(b+c);
    g=a*b*c;
    h=(a+b)*c;
    i=a+b+c;

    if(s>=r && s>=g && s>=h && s>=i)
    {
        cout<<s<<endl;
    }
    else if(r>=s && r>=g && r>=h && r>=i)
    {
        cout<<r<<endl;
    }
    else if(g>=r && g>=s && g>=h && g>=i)
    {
        cout<<g<<endl;
    }
    else if(h>=r && h>=g && h>=s && h>=i)
    {
        cout<<h<<endl;
    }
    else if(i>=r && i>=g && i>=h && i>=h)
    {
        cout<<i<<endl;
    }
}
