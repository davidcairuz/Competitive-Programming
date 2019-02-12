#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int a, b, k;
		cin >> a >> b >> k;

		ll pos_steps;
		ll neg_steps;

		pos_steps = k/2;
		neg_steps = k/2;

		if(k & 1) pos_steps++;

		ll ans = (pos_steps * a) - (neg_steps * b);
		cout << ans << endl;	
	}
}