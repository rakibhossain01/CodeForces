#include<iostream>
using namespace std;

int main()
{
    int  n,i,a,x,y;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==1)
        {
            cout<<"2"<<endl;
        }
        else
        {
            if(a%2==0)
            {
                x=a/2;

            }
            else
            {
                x=1+(a/2);
            }
            if(a%3==0)
            {
                y=a/3;
            }
            else
            {
                y=1+(a/3);
            }
            if(x<y)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<y<<endl;
            }
        }
    }
}
