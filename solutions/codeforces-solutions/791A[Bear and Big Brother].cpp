#include <iostream>
using namespace std;

int main (void)
{
  int a, b;
  int i = 0;
  
  cin >> a >> b;
  
  while(a<=b)
  {
    a = a * 3;
    b = b * 2;
    
    i++;
    
  }
  
  cout << i << endl;

}