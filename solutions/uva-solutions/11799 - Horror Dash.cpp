#include <bits/stdc++.h>
using namespace std;

int main() {

	int q; cin >> q;
	
	for(int cases = 1; cases <= q; cases++) {
		
		int ans = 0;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			ans = max(ans, x);
		}

		cout << "Case " << cases << ": " << ans << endl;
	}
}