#include<iostream>
using namespace std;

int main()
{
    int m,n,s=0,i=1;
    cin>>m>>n;
    for( ; ; )
    {
        if(m-i==0)
        {
            break;
        }
        if(n-i==0)
        {
            break;
        }
        i++;
        s++;
    }
    if(s%2==0)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }
}
