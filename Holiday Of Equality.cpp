#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0;
    for(i=0; i<n-1; i++)
    {
        c+=a[n-1]-a[i];
    }
    cout<<c<<endl;

    return 0;
}
