#include<iostream>
using namespace std;

int main()
{
    int n,x,p=0,c=0,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
        {
            p+=x;
        }
        else
        {
            if(p<1)
            {
                ++c;
            }
            else
            {
                --p;
            }
        }
    }
    cout<<c<<endl;
}
