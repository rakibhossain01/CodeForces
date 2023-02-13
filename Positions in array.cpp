#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }
}
