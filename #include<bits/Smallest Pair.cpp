#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n],s,k=0;
        int m=INT_MAX;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<n; i++)
        {
            for(int j=2+k; j<=n; j++)
            {
                s=a[i]+a[j]+j-i;
                m=min(m,s);
            }
            k++;
        }
        cout<<m<<'\n';
    }
    return 0;
}
