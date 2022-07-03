#include <iostream>
using namespace std;

int main()
 {
    int a,x;
    cin >> a;
    x = a / 5;
    if (a % 5 > 0) {
        x++;
    }
    cout << x<<endl;
    return 0;
}
