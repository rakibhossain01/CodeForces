#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[51],n,i,c;
    cin>>n;

    a[0]=0;
    a[1]=1;

    for(i=2; i<=n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        c=a[i];
    }
    cout<<c<<endl;
}
