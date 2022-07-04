#include<iostream>
using namespace std;

int main()
{
    int n,a,i;
    cin>>n;

    while(n>0) {
        cin >> a;
        if (a== 1) {
            cout << "HARD" << endl;
            return 0;
        }
        n--;
    }
    cout << "EASY" << endl;
}
