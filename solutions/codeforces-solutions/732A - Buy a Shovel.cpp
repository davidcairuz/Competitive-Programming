#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r;	cin >> k >> r;
	int n = 1;

	while (( (n*k) - r) % 10 != 0 and n*k % 10 != 0) {
		n++;
	}

	cout << n << endl;
}