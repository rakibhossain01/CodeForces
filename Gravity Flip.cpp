#include<iostream>
using namespace std;
int main()
{
    int x,temp=0;
    cin>>x;
    int s1[x];
    for(int i=0; i<x; i++)
    {
        cin>>s1[i];
    }
    for(int i=0; i<x; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(s1[i]>s1[j])
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }

        }
    }
    for(int i=0; i<x; i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}


