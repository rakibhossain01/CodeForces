#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_map<char,int>mp;
        int flag=1;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;

            if(mp[s[i]]>1 && s[i-1]!=s[i])
            {
                flag =0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}
