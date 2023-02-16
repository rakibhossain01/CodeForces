#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int m=INT_MAX;
    int s=INT_MIN;
    int c,b,d;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        m=min(m,a[i]);
        s=max(s,a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            cout<<s<<" ";
        }
        else if(a[i]==s)
        {
            cout<<m<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }
}
