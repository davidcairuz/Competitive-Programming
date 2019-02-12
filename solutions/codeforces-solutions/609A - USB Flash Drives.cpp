#include <bits/stdc++.h>
using namespace std;

vector<int> num;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		num.push_back(x);
	}

	sort(num.rbegin(), num.rend());

	int sum = 0;
	int count = 0;
	for (int i : num) {
		sum += i;
		count++;
		if(sum >= m) {
			break;
		}
	}

	cout << count << endl;
	
}