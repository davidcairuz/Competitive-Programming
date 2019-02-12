#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> levels;
	int n;	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		levels.push_back(x);
	}

	int ans = 1;
	int maximum_ans = 1;
	for(int i = 1; i < n; i++) {
		if(levels[i] <= levels[i-1] * 2) ans++;
		else ans = 1;

		maximum_ans = max(ans, maximum_ans);
	}

	cout << maximum_ans << endl;
}