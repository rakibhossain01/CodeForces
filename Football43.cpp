#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,g=0;
    cin>>t;
    string s1,s2;

    while(t--)
    {
        if(g!=0)
        {
            cin>>s1;
            if(s1==s2)
            {
                g++;
            }
            else
            {
                g--;
            }
        }
        else
        {
            cin>>s2;
            g=1;
        }
    }
    cout<<s2<<endl;
    return 0;
}
