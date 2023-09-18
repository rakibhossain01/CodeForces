#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int zers=count(s.begin(),s.end(),'0');
    int ons=count(s.begin(),s.end(),'1');
    cout<< n-(2*min(zers,ons));
    return 0;
}
