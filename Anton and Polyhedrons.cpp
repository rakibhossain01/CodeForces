#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n,i,Icosahedron=20,Cube=6,Tetrahedron=4,Dodecahedron=12,Octahedron=8;
    int sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Icosahedron")
        {
            sum+=20;
        }
        else if(s=="Cube")
        {
            sum+=6;
        }
        else if(s=="Tetrahedron")
        {
            sum+=4;
        }
        else if(s=="Dodecahedron")
        {
            sum+=12;
        }
        else if(s=="Octahedron")
        {
            sum+=8;
        }
    }
    cout<<sum<<endl;

}
