#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=size(s);
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
        return ;
    }
    int j=n/2;
    int i=0;
    while(j<n)
    {
        if(s[i]!=s[j])
        {
            cout<<"NO"<<endl;
            return ;
        }
        i++;
        j++;
    }
    cout<<"YES"<<endl;
    return ;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)solve();
    return 0 ;
}
