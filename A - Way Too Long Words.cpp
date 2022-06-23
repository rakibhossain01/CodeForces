#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
    int i,n,len=0;
    char s[101];
 
    cin>>n;
 
    for(i=0;i<n;i++)
    {
        cin>>s;
        len=strlen(s);
        if(len>10){
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
