#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,m[3],n,d;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        d=s[n-1]-'a';
        cout<<d+1<<endl;
    }
    return 0;
}
