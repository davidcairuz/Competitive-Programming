#include <bits/stdc++.h>
using namespace std;

#define nf -1

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int n = s.size();

	int ob, cb, oc, cc;
	ob = cb = oc = cc = nf;

	int size = 4;

	for(int i = 0; i < n; i++) if(s[i] == "[") {ob = i; break;}
	for(int i = n-1; i > ob + 2; i--) if(s[i] == "]") {cb = i; break;}
	for(int i = ob; i < cb; i++) if(s[i] == ":") {oc = i; break;}
	for(int i = cb; i > oc; i--) if(s[i] == ":") {cc = i; break;}
	for(int i = oc; i < cc; i++) if(s[i] == "|") size++;

	if(ob == nf or cb == nf or oc == nf or cc == nf) cout << -1 << endl;
	else cout << size << endl;
}	