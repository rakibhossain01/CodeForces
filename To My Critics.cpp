#include <iostream>
using namespace std;

bool inp(int a, int b, int c)
{
    return (a + b >= 10 || a + c >= 10 || b + c >= 10);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (inp(a, b, c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
