#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;	cin >> n;
		int ans = 0;

		if(n & 1) {
			ans++;
			n -= 3;
		}

		ans += n/2;
		printf("%d\n", ans);
	}
}