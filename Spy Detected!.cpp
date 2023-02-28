#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,found,num=0;
        cin>>n;
        int a[n];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n; i++)
        {
            if(a[1]==a[i])
            {
             num++;
            }
            else
            {
             found = i;
            }
        }
        if(num==(n-1))
        {
         cout<<found<<endl;
        }
        else
        {
         cout<<1<<endl;
        }
    }
}
