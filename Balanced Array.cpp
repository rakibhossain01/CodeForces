#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,ans,s=0,sum=0;
        cin>>a;
        vector<int>num;
        num.push_back(2);
        if(a%2==0)
        {
            if(a%4==0)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<=a; i++)
                {
                    if(i%2==0)
                    {
                        num.push_back(i);
                        s+=i;
                    }
                }
                for(int i=1; i<=a; i++)
                {
                    if(i%2!=0)
                    {
                        num.push_back(i);
                        sum+=i;
                        b=i;
                    }
                }
                ans=s-sum;
                num.back()=ans+b;
                for(int i=1; i<=a; i++)
                {
                    cout<<num[i]<<" ";
                }
                cout<<endl;
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
    return 0;
}
