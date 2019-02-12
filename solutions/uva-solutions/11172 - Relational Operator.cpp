#include <bits/stdc++.h>
using namespace std;

int main() {

	int q; cin >> q;
	
	while(q--) {
		int a, b;
		cin >> a >> b;

		if (a == b) cout << "=" << endl;
		else if (a < b) cout << "<" << endl;
		else cout << ">" endl;

	}

}