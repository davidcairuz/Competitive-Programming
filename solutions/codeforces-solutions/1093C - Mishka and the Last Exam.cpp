#include <bits/stdc++.h>
using namespace std;

long long to_sum[100100];
long long sequence[200200];

int main() {
	int n;
	cin >> n;

	n = n/2;
	for(int i = 0; i < n; i++) cin >> to_sum[i];

	long long delta = 0;
	for(int i = 0, j = (n * 2) - 1; i < j; i++, j--) {
		sequence[i] = delta;
		sequence[j] = to_sum[i] - delta;

		if(to_sum[i+1] > to_sum[i]) delta += to_sum[i+1] - to_sum[i];
	}

	for(int i = 0; i < n*2; i++) cout << sequence[i] << " ";
}