#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        int n,i,sum=0,odd=0,even=0;
        cin>>n;
        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0 || a[i]==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum+=a[i];
        }
        if(sum%2!=0 || sum==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(odd!=0 && even!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
