#include<iostream>
using namespace std;

int main()
{
    int n,i,even=0,odd=0;
    cin>>n;
    int s[n];

    for(i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    for(i=1; i<=n; i++)
    {
        if(s[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)
    {
        for(i=1; i<=n; i++)
        {
            if(s[i]%2!=0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(s[i]%2==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
