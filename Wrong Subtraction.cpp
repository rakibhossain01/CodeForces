#include<iostream>
using namespace std;

int main()
{
    int a,n=0,i;

    cin>>n>>a;

    for(i=1;i<=a;i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n-=1;
        }
    }
    cout<<n<<endl;
}
