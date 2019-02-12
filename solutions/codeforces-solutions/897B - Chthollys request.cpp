#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int main() {
	ll n, p;
	cin >> n >> p;

	ll num;
	ll sum = 0;

	for(int i = 1; i <= n; i++) {
		string s = to_string(i);
		string r = s;
		reverse(r.begin(), r.end());
		s = s + r;

		char const *number = s.c_str();
		sscanf(number, "%lld", &num);

		sum = ((sum % p) + (num % p)) % p;
	}

	cout << sum % p << endl;
}