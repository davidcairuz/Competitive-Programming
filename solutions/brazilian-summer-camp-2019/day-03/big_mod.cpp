#include <bits/stdc++.h>
using namespace std;

long long fast_exp(long long x, long long y, long long m){
	long long ans = 1;
	x %= m;

	while (y > 0) {
		if (y & 1ll) ans = (ans * x) % m;

		y >>= 1ll;
		x = (x * x) % m;
	}

	return ans;
}

int main() {
	int b, p, m;
	while(scanf("%d%d%d", &b, &p, &m) != EOF) {
		cout << fast_exp(b, p, m) << endl;
	}
}
