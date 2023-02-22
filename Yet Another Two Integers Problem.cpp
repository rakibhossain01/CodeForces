#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,s;
        cin>>a>>b;

        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            s = abs(a-b);
            if(s%10==0)
            {
                cout<<s/10<<endl;
            }
            else
            {
                cout<<(s/10)+1<<endl;
            }
        }
    }
}
