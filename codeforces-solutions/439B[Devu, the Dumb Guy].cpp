#include <bits/stdc++.h>
using namespace std;

vector<long long> sub;

int main() {
	long long x, n;

	cin >> n >> x;

	for(int i = 0; i < n; i++) {
		long long p;	cin >> p;
		sub.push_back(p);
	}

	sort(sub.begin(), sub.end());

	long long time = 0;
	for(int i = 0; i < n; i++) {
		time += x * sub[i];
		if(x > 1) x--;
	}

	cout << time << endl;
}