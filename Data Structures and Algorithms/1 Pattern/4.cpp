#include <iostream>
using namespace std;

int main() {

  int a = 0;
  
  for (int i = 0; i < 6; i++) 
  {

    for (int j = 0; j < i; j++)
    {
      cout << a;
    }

    a = a + 1;
    
    cout << endl;
  
  }

  return 0;
}
