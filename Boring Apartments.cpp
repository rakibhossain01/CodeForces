#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m=0,cnt=0;
        cin>>m;
        int mark = m%10;
        while(m>0)
        {
            m = m/10;
            cnt++;
        }
        int times = (mark-1)*10;
        for(int i=1; i<=cnt; i++)
        {
            times+=i;
        }
        cout<<times<<'\n';
    }
    return 0;
}
