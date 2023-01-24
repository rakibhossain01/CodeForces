#include<iostream>
using namespace std;

int main()
{
    char s;
    cin>>s;

    if(s>='a' && s<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    else if(s>='A' && s<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    else if(s>='0' && s<='9')
    {
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}
