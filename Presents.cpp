#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j =1 ; j<=n;j++)
    {
        for(i=0;i<=n;i++)
        {
            if(a[i]==j)
            {
                cout<< i + 1<<" ";
            }
        }
    }
    cout<<endl;
}
