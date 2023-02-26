#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;

    while(n--)
    {
        int p;
        cin>>p;
        if((p+k)<=5)
        {
            count++;
        }
    }
    cout<<(count/3)<<endl;

    return 0;
}
