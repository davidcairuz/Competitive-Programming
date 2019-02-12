#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll genres[12];
// could use accumulated sum if there were more genres.

int main() {
	ll n, m;
	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		ll g;
		cin >> g;
		genres[g]++;
	}
	
	// genres[i] * sum of all others idx, for all i.
	// a * sum_all

	ll ans = 0;

	for(int i = 1; i <= m; i++) {
		ll a = genres[i];
		ll sum_all = 0;

		for(int j = 1; j <= m; j++) {
			if(j != i) sum_all += genres[j];
		}

		ans += a * sum_all;
	}

	ans /= 2;
	printf("%lld\n", ans);
}