#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int mex = n;

	for(int i = 0; i < m; i++) {
		int l, r; cin >> l >> r;
		mex = min(mex, r - l + 1);
	}

	cout << mex << endl;
	for(int i = 0; i < n; i++) cout << i % mex << " ";
}
