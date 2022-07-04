#include<iostream>
using namespace std;

int main()
{
    int n,a,c,num=0,i;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a>>c;
        if(c-a>=2)
        {
            num +=1;
        }
    }
    cout<<num<<endl;
}
