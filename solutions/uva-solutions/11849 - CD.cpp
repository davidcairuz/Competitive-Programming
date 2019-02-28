#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m;

	while (cin >> n >> m, (n or m)) {
		set<int> catalogue;
		int ans = 0;

		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			catalogue.insert(x);
		}

		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			if (catalogue.find(x) != catalogue.end()) ans++;
		}

		cout << ans << endl;
	}
}