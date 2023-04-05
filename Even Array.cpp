#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,odd=0,even=0;
        cin>>n;
        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(i%2 != a[i]%2 )
            {
                if(a[i] % 2 == 1)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
        }
        if(odd != even)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<even<<endl;
        }
    }
}
