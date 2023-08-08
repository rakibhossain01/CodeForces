#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s,r,p;
        cin>>s>>r;


        for(int i=0; i<n; i++)
        {
            if((s[i]=='R' && r[i]!='R') || (s[i]!='R' && r[i]=='R'))
            {
                c = 1;
                break;
            }

        }
        if(c==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
