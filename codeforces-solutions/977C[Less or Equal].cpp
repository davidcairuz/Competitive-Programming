#include <bits/stdc++.h>
using namespace std;

// number, times
map<int, int> numbers;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		numbers[x]++;
	}

	if (k == 0) {

	}

	for(auto i : numbers) {

		if(k == 0) {
			int ans = i.first - 1;
			if(ans < 1) cout << -1 << endl;
			else cout << ans << endl;
			return 0;
		}

		k = k - i.second;
		if(k == 0) {
			cout << i.first << endl;
			break;
		} else if(k < 0) {
			cout << -1 << endl;
			break;
		}
	}
}