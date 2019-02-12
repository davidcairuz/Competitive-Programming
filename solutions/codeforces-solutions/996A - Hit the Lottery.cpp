#include <bits/stdc++.h>
using namespace std;

int notas[5] = {1 , 5, 10, 20, 100};

int main() {
	int n;
	cin >> n;

	int current = 4, ans = 0;
	while(n > 0) {
		while(n - notas[current] < 0) current--;
		n -= notas[current];
		ans++;
	}

	cout << ans << endl;
}