#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
  

  cin >> s;
  int sum;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == "A" || s[i-1] == "A" || s[i+1] == "A") sum++;
    if(s[i] == "B" || s[i-1] == "B" || s[i+1] == "B") sum++;
    if(s[i] == "C" || s[i-1] == "C" || s[i+1] == "C") sum++;

    if(sum == 3) {
       cout << "Yes" << endl;
       return 0;
    }
    sum = 0;  
    }

    cout << "No" << endl;
  
}