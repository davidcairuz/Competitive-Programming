#include <bits/stdc++.h>
using namespace std;

int main() {
	long long ans = 0;
	long long homex, homey;
	long long schoolx, schooly;
	
	cin >> homex >> homey;
	cin >> schoolx >> schooly;

	long long n; cin >> n;
	for(int i = 0; i < n; i++) {
		long long a, b, c;
		cin >> a >> b >> c;

		long long num1 = (a * homex) + (b * homey) + c;
		long long num2 = (a * schoolx) + (b * schooly) + c;

		num1 = (num1 < 0) ? 1 : 0;
		num2 = (num2 < 0) ? 1 : 0;

		ans += (num1 != num2);
	}

	cout << ans << endl;
}