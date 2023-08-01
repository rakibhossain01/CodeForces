#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,s;
    cin>>x>>y;

    string d[6]= {"1/6","1/3","1/2","2/3","5/6","1/1"};
    s = max(x,y);
    cout<<d[6-s];
    return 0;
}
