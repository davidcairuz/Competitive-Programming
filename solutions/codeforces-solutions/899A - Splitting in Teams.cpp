#include <bits/stdc++.h>
using namespace std;

int freq[2]; // freq[0] = n of 1 and freq[1] = n of 2

int main() {
	int ans = 0;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		x--;
		freq[x]++;
	}

	int add = min(freq[0], freq[1]);
	ans += add;

	freq[0] -= add;
	freq[1] -= add;

	ans += freq[0] / 3;
	cout << ans << endl;
}