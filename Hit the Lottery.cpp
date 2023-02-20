#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    int a[]= {100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        s+=n/a[i];
        n=n%a[i];
    }
    cout<<s<<endl;
    return 0;
}
