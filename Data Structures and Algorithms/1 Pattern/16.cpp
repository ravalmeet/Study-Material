#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 6;

    int k = 64;

    for (int i = 0; i < n; i++)
    {

        // int k = 65;

        for(int j = 0; j < i; j++)

        {

            cout << char(k) << " ";

           

        }
        
        k = k + 1;

        cout << endl;
    }

    return 0;
}