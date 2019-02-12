#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

int f[5];

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		f[x]++;
	}

	int ans = 0;

	while(f[3]) {
		ans++;
		if(f[1]) f[1]--;
		f[3]--;
	}

	while(f[2] >= 2) {
		ans++;
		f[2] -= 2;
	}

	while(f[2] == 1) {
		ans++;
		f[1] -= 2;
		f[2]--;
	}

	while(f[4]) {
		ans++;
		f[4]--;
	}

	while(f[1] > 0) {
		ans++;
		f[1] -= 4;
	}

	cout << ans << endl;
}