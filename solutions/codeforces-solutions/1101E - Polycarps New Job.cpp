#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char op;
	int x, y;
	int n;
	int mx, my;
	my = mx = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> op >> x >> y;
		if(op == "+") {
			if(y > x) swap(x, y);
			mx = max(x, mx);
			my = max(y, my);
		} else {
			if(y > x) swap(x, y);
			if(mx > x or my > y) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}	
}	