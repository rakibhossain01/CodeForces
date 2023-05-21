#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        set<string>S;
        for(int i=0; i<n-1; i++)
        {
            string w="";
            w+=s[i];
            w+=s[i+1];
            S.insert(w);
        }
        cout<<S.size()<<endl;
    }
}
