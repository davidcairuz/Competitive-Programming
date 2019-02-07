#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, k;	cin >> n >> k;

	long long int sizeO;
	long long int sizeE;

	if(n % 2 == 0) {
		sizeO = sizeE = n/2;
	} else {
		sizeO = (n/2) + 1;
		sizeE = n - sizeO;
	}

	if(k <= sizeO) {
		cout << k * 2 - 1 << endl;
	} else {
		cout << (k - sizeO) * 2 << endl;
	}
}