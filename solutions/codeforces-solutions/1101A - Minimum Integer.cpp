#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--) {
		int l, r, d;
		cin >> l >> r >> d;
		int ans;

		if(d < l or d > r) ans = d;
		else {
			ans = r/d * d;
			if(ans <= r) ans += d;
		}
		cout << ans << endl;
	}	
}	