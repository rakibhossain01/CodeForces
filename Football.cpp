#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int con=0,num=0,i,x=0;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            con++;
            num=0;
        }
        else
        {
            num++;
            con=0;
        }
        if(con==7 || num==7)
        {
            x=1;
        }
    }
    if(x==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
