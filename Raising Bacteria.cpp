#include<iostream>
using namespace std;

int main()
{
    int a,count=0;
    cin>>a;

    while(a>0)
    {
        if(a%2==1)
        {
            a--;
            count++;
        }
        else
        {
            a = a/2 ;
        }
    }
    cout<<count<<endl;

    return 0;
}
