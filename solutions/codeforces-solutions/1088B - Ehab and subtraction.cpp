#include <bits/stdc++.h>
using namespace std;

vector<int> numbers;

int main() {
	int n, k;
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		numbers.push_back(x);
	}

	sort(numbers.begin(), numbers.end());

	// accumulated subtraction
	int subtract = 0;
	for(int i = 0; i < n; i++) {
		if(k == 0) break;
		if(numbers[i] - subtract > 0) {
			cout << numbers[i] - subtract << endl;
			subtract += numbers[i] - subtract;
			k--;
		}
	}

	while(k--) cout << 0 << endl;
}