#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back
bool h, e, l, l2, o;

int main() {
	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++) {
		if(s[i] == "h") h = true;
		if(h and s[i] == "e") e = true;
		if(h and e and l and s[i] == "l") l2 = true;
		if(h and e and s[i] == "l") l = true;
		if(h and e and l and l2 and s[i] == "o") o = true;
	}

	if(h and e and l and l2 and o) cout << "YES" << endl;
	else cout << "NO" << endl;
}