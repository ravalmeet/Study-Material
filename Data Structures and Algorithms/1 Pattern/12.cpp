#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {

            cout << j;
        }

        for (int j = 2*(n-i); j > 0; j--)
        {

            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {

            cout << j;
        }

        cout << endl;
    }

    return 0;
}