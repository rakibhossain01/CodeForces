#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int b[a],sum1=0,sum2=0,cunt=0;

    for(int i=0;i<a;i++)
    {
        cin>>b[i];
        sum1+=b[i];
    }
    sum1=sum1/2;
    sort(b,b+a);

    for(int j=a-1;j>=0;j--)
    {
        sum2+=b[j];
        cunt++;
        if(sum1<sum2)
        {
            break;
        }
    }
    cout<<cunt<<endl;
}
