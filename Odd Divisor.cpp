#include<iostream>
using namespace std;

int main()
{
    long long x,t,l;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x & 1)
            cout<<"YES"<<endl;
        else
        {
            while(x!=1)
            {
                x=x/2;

                if(x==1)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                else if(x & 1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
