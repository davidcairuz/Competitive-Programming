#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, total, a;
	cin >> n >> total >> a;

	if(n == 0) return !printf("%d\n", total / a);

	vector<pair<int, int> > v;
	for(int i = 1; i <= n; i++) {
		int t, l;
		cin >> t >> l;
		v.emplace_back(t, t+l);
	}
	
	sort(v.begin(), v.end());

	int ans = 0;
	ans += abs(v[n-1].second - total) / a;
	ans += abs(v[0].first - 0) / a;

	for(int i = 0; i < n-1; i++) {
		ans += abs(v[i+1].first - v[i].second) / a; 
	}

	cout << ans << endl;
}