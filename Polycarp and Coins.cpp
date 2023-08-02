#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,s;
        cin>>n;
        s = n/3;

        if(((s*1)+(s+1)*2)==n)
        {
            cout<<s<<" "<<s+1<<endl;
        }
        else if(((s*1)+(s-1)*2)==n)
        {
            cout<<s<<" "<<s-1<<endl;
        }
        else if(((s*2)+(s+1)*1)==n)
        {
            cout<<s+1<<" "<<s<<endl;
        }
        else if(((s*2)+(s-1)*1)==n)
        {
            cout<<s-1<<" "<<s<<endl;
        }
        else if(n%3==0)
        {
         cout<<s<<" "<<s<<endl;
        }
    }
}
