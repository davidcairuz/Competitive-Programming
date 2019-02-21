#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n, n != 0) {
		priority_queue<long long, vector<long long>, greater<long long>> numbers;
		
		long long cost = 0;

		for(int i = 0; i < n; i++) {
			long long a; cin >> a;
			numbers.push(a);
		}

		while(numbers.size() > 1) {
			long long a = numbers.top();
			numbers.pop();
			long long b = numbers.top();
			numbers.pop();
			cost += a + b;
			numbers.push(a+b);
		}

		cout << cost << endl;
	}
}
