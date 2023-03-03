#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int x,y,n,p;
        cin>>x>>y>>n;

        p = floor((n-y)/x);
        cout<<(p*x)+y<<endl;
    }
}
