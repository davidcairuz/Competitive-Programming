#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n, i;
  int counter, temp;
  string s;
  string first, second, s_final, ans;
  vector<string> twograms;
  
  counter = 0;
  temp = 0;
  
  cin >> n;
  cin >> s;
  
  for (i = 0; i < s.size() - 1; i++) {
    first = s[i];
    second = s[i+1];
    s_final = first + second;
    
    twograms.push_back(s_final);
  }
  
  sort(twograms.begin(), twograms.end());
  
  for (i = 0; i < twograms.size(); i++) {
    // cout << twograms[i] << endl;
    if (twograms[i] == twograms[i+1])
      counter++;
    else {
      counter = 0;
    }
    
    if (counter >= temp) {
      temp = counter;
      ans = twograms[i];
    }
  }
  
  cout << ans << endl;
  
}