#include<iostream>
#include<string>
using namespace std;
 
int main()
{
      string s;
 
      cin>>s;
 
      for (int i = 0; i < s.size(); i++){
            if(s[0]>92){
                s[0]-=32;
            }
        }
        cout<<s<<endl;
        return 0;
}
 
