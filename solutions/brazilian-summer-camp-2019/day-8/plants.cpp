#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long fast_exp(long long x, long long y){
	long long ans = 1;
	x %= MOD;

	while (y > 0){
		if (y & 1ll) ans = (ans * x) % MOD;

		y >>= 1ll;
		x = (x * x) % MOD;
	}

	return ans % MOD;
}

int main() {
	long long n;
	cin >> n;

	if (n == 0) return !printf("1\n");
	cout << (fast_exp(2, 2*n-1) + fast_exp(2, n-1)) % MOD << endl;
}
