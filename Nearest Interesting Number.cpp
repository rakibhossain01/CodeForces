#include<iostream>
using namespace std;
int main()
{
    int sum,reminder=0,a,ans=0;
    cin>>a;
    ans=a;
    while(1)
    {
        sum=0;
        while(a)
        {
            sum+=a%10;
            a/=10;
        }
        reminder=sum%4;
        if(reminder==0)
        {
            cout<<ans;
            break;
        }
        else if(reminder!=0)
        {
            ans++;
            a=ans;
        }
    }
}
