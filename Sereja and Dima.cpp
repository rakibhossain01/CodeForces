#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    int n[t];
    for(i=0; i<t; i++)
    {
        cin>>n[i];
    }
    int s=0,d=0;
    int left = 0;
    int right=t-1;
    int r = t;
    int turn = 0;

    while(r !=0)
    {
        if(turn%2==0)
        {
            if(n[left]>n[right])
            {
                s+=n[left];
                left++;
            }
            else
            {
                s+=n[right];
                right--;
            }
        }
        else
        {
            if(n[left]>n[right])
            {
                d+=n[left];
                left++;
            }
            else
            {
                d+=n[right];
                right--;
            }
        }
        r--;
        turn++;
    }
    cout<<s<<" "<<d<<endl;
}
