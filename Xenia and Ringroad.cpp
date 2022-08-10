#include<iostream>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    int s[b];
    for(i=0;i<b;i++)
    {
        cin>>s[i];
    }
    long long int count=s[0]-1;
    for(i=0;i<b-1;i++)
    {
        if(s[i]>s[i+1])
        {
            count+=a-(s[i]-s[i+1]);
        }
        else if(s[i]<s[i+1])
        {
            count+=s[i+1]-s[i];
        }
    }
        cout<<count<<endl;
}
