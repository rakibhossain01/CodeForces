#include<iostream>
using namespace std;

int main()
{
    int n,a,b,i,num=0,str=0,x=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a>>b;

        if(a>b)
        {
            num++;
        }
        else if(b>a)
        {
            str++;
        }
        else
        {
         x++;
        }
    }
    if(num>str)
    {
        cout<<"Mishka"<<endl;
    }
    else if(num==str)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else
    {
        cout<<"Chris"<<endl;
    }
}
