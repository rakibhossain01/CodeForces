#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ah,ch;
    cin>>ah;

    if(ah>='a' && ah<='z')
    {
        ch = toupper(ah);
        cout<<ch<<endl;
    }
    else
    {
        ch = tolower(ah);
        cout<<ch<<endl;
    }
    return 0;
}
