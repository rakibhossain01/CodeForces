#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        int sum=0,su=0,i;
        for(i=0; i<3; i++)
        {
            sum+=s[i];
        }
        for(i=3; i<6; i++)
        {
            su+=s[i];
        }
        if(sum==su)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
