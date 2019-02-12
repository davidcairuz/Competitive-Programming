#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

ll mod_mult(ll a, ll b) {
	return (a % mod) * (b % mod) % mod;
}

ll fast(ll base, ll power) {
    ll result = 1;

    while(power > 0) {
        if(power & 1) {
            result = mod_mult(result, base);
        }

        base = mod_mult(base, base);
        power = power >> 1;
    }

    return result;
}

int main() {
	ll n, k, ans;
	cin >> n >> k;

	if(n == 0) return !printf("0\n");
	ans = mod_mult(n, fast(2, k+1)) - fast(2, k) + 1;
	ans = (ans % mod + mod) % mod;

	cout << ans << endl;
}