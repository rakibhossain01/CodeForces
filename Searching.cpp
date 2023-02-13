#include<iostream>
using namespace std;

int main()
{
    long long int n,i,k;
    cin>>n;
    long long int a[n],found,t;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            found=1;
            t=i;
            break;
        }
        else
        {
            found=0;
        }
    }
    if(found==1)
    {
        cout<<t<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
