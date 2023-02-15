#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
}
