#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a=0,b=0,n,i=1;
        cin>>n;
        while(n--)
        {
            int c,d;
            cin>>c>>d;
            if(c<=10 && d>b)
            {
                a=i;
                b=d;
            }
            i++;
        }
        cout<<a<<"\n";
    }
}
