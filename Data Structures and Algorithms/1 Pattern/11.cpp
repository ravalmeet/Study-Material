#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 1;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << a;

            if (a == 1)
            {
                a = 0;
            }
            else
            {
                a = 1;
            }
        }

        cout << endl;
    }

    return 0;
}