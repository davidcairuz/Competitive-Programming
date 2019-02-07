#include <bits/stdc++.h>
using namespace std;

// sort and change all negative to positive, sort again and change the smaller number if k is still odd

int numbers[100100];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	sort(numbers, numbers + n);

	for(int i = 0; i < n; i++) {
		if(k < 1 or numbers[i] >= 0) break;
		numbers[i] = -1 * numbers[i];
		k--;
	}

	if(k > 0 and k % 2 == 1) {
		sort(numbers, numbers + n);
		numbers[0] = -1 * numbers[0];
	}

	long long ans = 0;
	for(int i = 0; i < n; i++) ans += numbers[i];

	cout << ans << endl;
}