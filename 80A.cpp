#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m,s,r;
    cin>>n>>m;

    for(int i=0; i<15; i++)
    {
        if(a[i]==n)
        {
            s=i;
        }
        if(a[i]==m)
        {
            r=i;
        }
    }
    if((s+1)==r)
    {
     cout<<"YES"<<endl;
    }
    else
    {
     cout<<"NO"<<endl;
    }

}

