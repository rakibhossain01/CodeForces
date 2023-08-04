#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.sync_with_stdio(NULL);

    int n;
    cin>>n;
    int a[n];
    int m=INT_MAX;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        int cont=0;

        while(a[i]%2==0 && a[i]>0)
        {
            cont++;
            a[i]/=2;
        }
        m = min(m,cont);
    }
    cout<<m<<endl;
    return 0;
}
