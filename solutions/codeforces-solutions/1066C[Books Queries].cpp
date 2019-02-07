#include <bits/stdc++.h>
using namespace std;

int shelf[200100];

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int q;	cin >> q;
	int l = 0;
	int r = 0;

	bool initialized = false;

	for(int i = 0; i < q; i++) {
		char op;
		int id;

		cin >> op >> id;

		if(!initialized) {
			shelf[id] = 0;
			initialized = true;
			continue;
		}

		if(op == "L") {
			l--;
			shelf[id] = l;

		} else if (op == "R") {
			r++;
			shelf[id] = r;

		} else {
			cout << min(abs(l - shelf[id]), abs(r - shelf[id])) << endl;
		}
	}
}