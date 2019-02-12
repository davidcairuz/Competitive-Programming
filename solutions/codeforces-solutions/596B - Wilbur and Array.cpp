#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	long long ans = 0;
	long long now = 0;

	for(int i = 0; i < n; i++) {
		long long x; cin >> x;
		ans += abs(now - x);

		now = x;
	}

	cout << ans << endl;
}