#include<iostream>
using namespace std;

int main()
{
    long long int n,i,s=0;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s<0)
    {
        cout<<(s*(-1))<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
}
