#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

int clients[100100];
int products[100100];
vector<int> sellout;

int main() {
	int n, f;
	ll ans = 0;
	cin >> n >> f;

	for(int i = 0; i < n; i++) {
		cin >> products[i] >> clients[i];
		ans +=  min(products[i], clients[i]);
		int coefficient = min(products[i] * 2, clients[i]) - min(products[i], clients[i]);
		sellout.pb(coefficient);
	}
	
	sort(sellout.rbegin(), sellout.rend());
	for(int i = 0; i < f; i++) ans += sellout[i];

	printf("%lld\n", ans);
}