#include<iostream>
using namespace std;

int main()
{
    int n,h,i,num=0,ctr=0,s,a;

    cin>>n>>h;

    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s<=h)
        {
            num+=1;
        }
        else
        {
            ctr +=2;
        }
    }
    a = num + ctr ;

    cout<<a<<endl;
}
