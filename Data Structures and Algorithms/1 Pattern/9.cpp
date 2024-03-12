#include <bits/stdc++.h>
using namespace std;

void pattern(int N) {

  for (int i = 0; i < 5; i++) {

    for(int j = 0; j < i; j++)
    {
        cout << " " ;
    }

    for (int j = N; j > 0; j--) 
    {
      cout << "*"; 
    }


    for(int j = 0; j < i; j++)
    {
        cout << " " ;
    }

    N = N - 2;

    cout << endl;
  }
}

int main() {

  int N = 9;

  pattern(N);

  return 0;
}