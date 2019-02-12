#include <bits/stdc++.h>
using namespace std;

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<long long,long long> pii;

#define mod 998244353
#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

long long mod_mult(long long a, long long b) {
	return (a % mod * b % mod) % mod;
}

int main() {
	long long n;
	cin >> n;
	string s;
	cin >> s;

	long long ans;

	char first_letter = s[0];
	char last_letter = s[n-1];

	long long first_interval = 0;
	long long last_interval = 0;

	for(long long i = 0; i < n; i++) {
		first_interval++;
		if(s[i] != s[i+1]) break;
	}

	for(long long i = n-1; i >= 0; i--) {
		last_interval++;
		if(s[i-1] != s[i]) break;
	}

	if (first_letter != last_letter) ans = (first_interval % mod + last_interval % mod + 1 % mod) % mod;
	//else ans = (first_interval % mod + last_interval % mod + 2 + (last_interval - 1) % mod + (first_interval-1) % mod + (last_interval - 1) % mod * (first_interval - 1) % mod) % mod;
	else ans = (first_interval % mod + last_interval % mod + (last_interval) % mod + (first_interval) % mod + mod_mult((last_interval - 1), (first_interval -1))) % mod;
	
	cout << ans << endl;
}