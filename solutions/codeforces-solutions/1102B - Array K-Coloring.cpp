#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;

int main() {
	int n, k;
	cin >> n >> k;

	vector<pair<int, int> > v;
	int ans[n];

	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		v.emplace_back(x, i);
		mp[x]++;
	}

	if(n < k) return !printf("NO\n");
	for(auto i : mp) {
		if(i.second > k) return !printf("NO\n");
	}

	sort(v.begin(), v.end());

	int color = 1;
	for(int i = 0; i < n; i++) {
		if(color > k) color = 1;
		ans[v[i].second] = color;
		color++;
	}

	cout << "YES" << endl;
	for(int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
}