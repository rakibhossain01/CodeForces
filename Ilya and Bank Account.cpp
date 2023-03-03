#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;

    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        a = n / 10;
        b =(n / 100 )* 10 + (n % 10);
        cout << max(a, b) << endl;
    }
}
