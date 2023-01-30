#include<bits/stdc++.h>
using namespace std;

int main()
{
 float a,s;
 cin>>a;
 s = a - int(a);
 if(s>0)
 {
  cout<<"float "<<int (a)<<" "<<fixed<<setprecision(3)<<s<<endl;
 }
 else
 {
  cout<<"int "<<a<<endl;
 }
 return 0;
}
