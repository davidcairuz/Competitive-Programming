#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

vector<int> v;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		v.pb(x);
	}

	int mod = n;
	int acc_sum = 0;

	printf("%d\n", n+1);
	for(int i = n - 1; i >= 0; i--) {
		int ans = mod - ((v[i] + acc_sum) % mod);
		acc_sum += ans + i;

		printf("1 %d %d\n", i+1, ans + i);
	}

	printf("2 %d %d\n", mod, mod);
}