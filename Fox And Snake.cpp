#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j;
    cin>>a>>b;

    for(i=1; i<=a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(i%4==0)
            {
                if(j==0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            else if(i%4==2)
            {
                if(j==(b-1))
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
}
