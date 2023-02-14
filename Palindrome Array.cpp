#include <iostream>
using namespace std;

int main()
{
    int n, digit=0;
    cin >> n;
    int a[n],i;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=n/2; i++)
    {
        if(a[i]!=a[(n-1)-i])
        {
            digit =1;
            break;
        }
    }

    if(digit == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
