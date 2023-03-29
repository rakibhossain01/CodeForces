#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,d;
    cin>>n;

    while(n--)
    {
        int s=0,w=0,f=0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            s=1;
        }
        if(a<c)
        {
            w=1;
        }
        if(a<d)
        {
            f=1;
        }
        cout<<(s+w+f)<<endl;
    }
}
