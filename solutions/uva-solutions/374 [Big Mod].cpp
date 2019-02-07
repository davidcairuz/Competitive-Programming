#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

long long fast(ll a, ll b, ll mod) {
	if(b == 0) return 1;
	long long ans = fast(a, b/2, mod);
	if(b & 1) return ((ans % mod) * (ans % mod) * (a % mod)) % mod;
	else return ((ans % mod) * (ans % mod)) % mod;
}

int main() {

	ll a, b, mod;
	while(cin >> a >> b >> mod) {
		cout << fast(a, b, mod) << endl;
	}
}
