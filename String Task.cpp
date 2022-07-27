#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i;

    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y')
  {
        if(s[i]<='Z')
        s[i]+=32;
        cout<<"."<<s[i];
  }
   }
   cout<<endl;
}
