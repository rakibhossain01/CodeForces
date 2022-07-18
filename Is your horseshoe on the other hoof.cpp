#include<iostream>
using namespace std;

int main()
{
    int a[100],i,j,num=0;

    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                num+=1;
                break;
            }
        }
    }
    cout<<num<<endl;
}
