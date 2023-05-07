#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a = 0, b = 0;
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;

            if (num == 0)
            {
                b++;
                a = max(a,b);
            }
            else
            {
                b = 0;
            }
        }
        cout << a << endl;
    }

    return 0;
}
