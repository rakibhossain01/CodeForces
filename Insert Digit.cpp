#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int len,n, index=-1;
        string str;
        cin>>len>>n>>str;
        for(int i=0; i<len; i++)
        {
            if(n>(str[i]-48))
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            cout<<str<<n<<endl;
        }
        else
        {
            str.insert(index,to_string(n));
            cout<<str<<endl;
        }
    }
}
