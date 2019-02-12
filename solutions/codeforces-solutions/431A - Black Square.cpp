#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int calories[5];
	for(int i = 1; i <= 4; i++) cin >> calories[i];

	string s;
	cin >> s;

	int ans = 0;
	for(int i = 0; i < s.size(); i++) {
		ans += calories[s[i] - "0"];
	}

	cout << ans << endl;
}