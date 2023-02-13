#include<bits/stdc++.h>
using namespace std;

void fast()
{
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();

    int n,i,j;
    cin>>n;
    int a[n];

    int m=INT_MAX;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        m=min(m,a[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==m)
        {
            cout<<a[i]<<" "<<i<<endl;
            break;
        }
    }
}
