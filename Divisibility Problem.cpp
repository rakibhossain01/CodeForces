#include<iostream>
using namespace std;

int main()
{
    int a,n,i,x,y;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x%y==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            a = x%y;
            cout<<y-a<<endl;
        }
    }
}
