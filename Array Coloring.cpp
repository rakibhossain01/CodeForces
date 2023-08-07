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
        int a,s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a%2!=0)
            {
                s+=a;
            }
        }
        if(s%2==0)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}
