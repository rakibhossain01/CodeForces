#include<iostream>
using namespace std;

int main()
{
    int n,i,b[101];
    double s=0,a=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        s+=b[i];
    }
    a = s/n;
    cout<<a<<endl;

}
