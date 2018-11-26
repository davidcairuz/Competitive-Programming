#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  int l, r;
  char c1, c2;
  string s;

  cin >> n >> m;
  cin >> s;

  for(int i = 0; i < m; i++) {
    cin >> l >> r >> c1 >> c2;
    for(int i = l - 1; i < r; i++) {
      if(s[i] == c1 ) s[i] = c2;
    }
  }

  cout << s << endl;
}