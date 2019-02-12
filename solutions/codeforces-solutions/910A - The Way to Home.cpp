#include <bits/stdc++.h>
using namespace std;

string lake;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, d;
	cin >> n >> d >> lake;

	int current_pos = 0;
	int ans = 0;
	while(current_pos != n-1) {
		int moved = 0;
		int jump_to = -1;
		for(int i = current_pos + 1; i < n; i++) {
			if(lake[i] == "1") jump_to = i;
			
			moved++;
			if(moved == d) break;
			
		}

		if(jump_to == -1) {
			cout << -1 << endl;
			return 0;

		} else {
			current_pos = jump_to;
			ans++;
		} 
	}
	cout << ans << endl;
}