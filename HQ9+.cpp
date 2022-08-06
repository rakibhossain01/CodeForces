#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int x=0;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
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
