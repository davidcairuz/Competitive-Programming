#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;
const long long m = 1000000007;

vector<ll> blocks;

ll mod_mult(ll a, ll b) {
	return ((a % m) * (b % m)) % m;
}

int main() {
	
	string s = "";
	ll count_a = 0;
	char c;
	while(scanf("%c", &c), c != "\n") {
		if(c == "a" or c == "b") s += c;
		if(c == "a") count_a++;
	}

	bool found_b = false;
	ll counter = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == "a") found_b = false;
		if(s[i] == "b") {
			if(!found_b) blocks.pb(counter);
			found_b = true;
			counter = 0;
		}

		if(!found_b) counter++;
		if(!found_b and i == s.size() - 1) blocks.pb(counter);
	}

	ll ans = 1;
	for(int i = 0; i < blocks.size(); i++) {
		ans = mod_mult(ans, blocks[i] + 1);
	}

	ans = (ans % m + m) % m;
	printf("%lld\n", ans - 1);
}