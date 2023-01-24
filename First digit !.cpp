#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    if(999<a && a<=9999)
    {
        if((a/1000)%2==0)
        {
            cout<<"EVEN"<<endl;
        }
        else
        {
            cout<<"ODD"<<endl;
        }
    }
    return 0;
}
