#include<bits/stdc++.h>
using namespace std;

void func(int i ,  int n)
{
    if( i > n) return;

    cout << n << endl;

    func(i , n - 1);
}


int main()
{

    int n = 10;
    func( 1 , n);

    return 0;
}