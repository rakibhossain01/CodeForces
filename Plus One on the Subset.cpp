#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long  n,i;
        cin>>n;
        long a[n],s;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            s = (a[n-1]-a[0]);
        }
        cout<<s<<endl;
    }
}
