#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,a,one=0,two=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        int b=0;
        if(two%2==1)
        {
            b+=2;
        }
        if(b==0)
        {
            if(one%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(one>=2)
            {
                if((one-2)%2==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
