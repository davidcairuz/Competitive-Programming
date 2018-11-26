#include <bits/stdc++.h>
using namespace std;

int main() {
  float k;
  float n, s, p;
  int result;
  
  cin >> k >> n >> s >> p;
  
  if(n > s){
    result = ceil(ceil(n/s)*k/p);
  }
  
  else{
    if ((int)k % (int)p == 0)
      result = k/p;
    else
      result = (k/p) + 1;
  }
  
  cout << result;

}