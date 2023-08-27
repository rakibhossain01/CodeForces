#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n[t];

    for(int i=0; i<t; i++)
    {
        cin>>n[i];
    }
    for(int i=t-1; i>=0; i--)
    {
        cout<<n[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
