#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int s[a],ma=0,maxi,mini,mi=101;
    for(int i=0;i<a;i++)
    {
        cin>>s[i];
        if(s[i]>ma)
        {
            ma=s[i];
            maxi=i;
        }
        if(s[i]<=mi)
        {
            mi=s[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(a-1)-mini<<endl;
}
