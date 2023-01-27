#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string inp = "314159265358979323846264338327";
    while(n--)
    {
        string s ;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[0] != '3')
                break;
            else
            {
                if (s[i] == inp[i])
                {
                    count++;
                }
                else break;
            }

        }
        cout << count<< '\n';

    }
    return 0;
}

