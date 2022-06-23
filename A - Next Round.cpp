#include<iostream>
using namespace std;
 
int main()
{
    int a,b,ar[100],num=0,i;
 
    cin>>a;
    cin>>b;
    for(i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    b=b-1;
    for(i=0;i<a;i++)
    {
        if(ar[i]>=ar[b] && (ar[i]>0))
        {
            num +=1;
        }
    }
 
    cout<<num<<endl;
    return 0;
}
