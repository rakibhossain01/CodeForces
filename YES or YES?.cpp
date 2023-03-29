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

        if(s=="YES" || s=="YEs" || s=="Yes" || s=="yes" || s=="YeS"|| s=="yES" || s=="yEs" || s=="yeS")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
