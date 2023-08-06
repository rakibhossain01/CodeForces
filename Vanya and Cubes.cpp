#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,c=0,i,r=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        s+=i;
        r+=s;
        if(r<=n)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
