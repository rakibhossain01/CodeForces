#include<iostream>
using namespace std;

int main()
{
    int n,i,num=0,s[10000000];

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
        if(s[i]!=s[i+1])
        {
            num+=1;
        }
    }
    cout<<num<<endl;
}
