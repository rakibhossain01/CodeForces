#include<iostream>
using namespace std;

int main()
{
    int n,r,sum,i;
    cin>>n>>r;

    for(i=1; ; i++)
    {
        sum+=n;
        if((sum%10)==0 || (sum%10)==r)
        {
            cout<<i<<endl;
            break;
        }
        else
        {
            continue;
        }
    }
}
