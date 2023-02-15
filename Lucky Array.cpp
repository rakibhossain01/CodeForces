#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[0]==a[i])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"Unlucky"<<endl;
    }
    else
    {
        cout<<"Lucky"<<endl;
    }

    return 0;
}
