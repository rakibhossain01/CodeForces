#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,i,ans,m=0;
    cin>>a>>n;
    int s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    m = s[n-1] - s[0];
    for(i=a; i<=n; i++)
    {
        ans = s[i-1] - s[i-a];
        ans = abs(ans);
        m = min(m,ans);
    }
    cout<<m<<endl;

    return 0;
}
